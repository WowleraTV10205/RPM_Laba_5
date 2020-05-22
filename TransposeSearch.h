//
// Created by Valera on 20.05.2020.
//

#ifndef RPM_LABA_5_TRANSPOSESEARCH_H
#define RPM_LABA_5_TRANSPOSESEARCH_H

using namespace std;
/**
 Функция поиска элемента методом транспозиции
 @param array массив
 @param _SIZE размерность массива
 @param key элемент, который нужно найти
 */
int TransposeSearch (int* array, int _SIZE, int key) {
    for (int i=0; i<_SIZE; i++) {
        if (array[i] == key) {
            if (i>0) {
                swap(array[i-1], array[i]);
                return i-1;
            }
            else {
                return i;
            }
        }
    }
    return -1;
}

#endif //RPM_LABA_5_TRANSPOSESEARCH_H