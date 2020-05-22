//
// Created by Valera on 20.05.2020.
//

#ifndef RPM_LABA_5_BINARYSEARCH_H
#define RPM_LABA_5_BINARYSEARCH_H

/**
 Функция бинарного поиска элемента
 @param array массив
 @param left крайний левый элемент
 @param right крайний правый элемент
 @param key элемент, который нужно найти
 */
int BinarySearch(int* array, int left, int right, int key) {
    while(1) {
        int mid = (right+left)/2;
        if (key < array[mid]) {
            right = mid-1;
        } else if (key > array[mid]) {
            left = mid+1;
        } else {
            return mid;
        }
        if (left>right) {
            return -1;
        }
    }
}

#endif //RPM_LABA_5_BINARYSEARCH_H