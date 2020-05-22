//
// Created by Valera on 20.05.2020.
//
#ifndef RPM_LABA_5_RANDOM_H
#define RPM_LABA_5_RANDOM_H

/**
 Функция заполнения элемента массива случайным числом
 @param range_min минимальное число для заполнения
 @param range_max максимальное число для заполнения
 @return рандомное число
 */
int random(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;
}
#endif //RPM_LABA_5_RANDOM_H
