//
// Created by Valera on 20.05.2020.
//

#ifndef RPM_LABA_5_QSORT_H
#define RPM_LABA_5_QSORT_H

/**
 @param array передаваемый массив для быстрой сортировки
 @param left крайний левый элемент
 @param right крайний правый элемент
 */
void QSort(int *array, int left, int right) {
    int pivot;
    int l_hold=left;
    int r_hold=right;
    pivot=array[left];
    while (left<right) {
        while ((array[right] >= pivot) && (left < right)) {
            right--;
        }
        if (left != right) {
            array[left] = array[right];
            left++;
        }
        while ((array[left] <= pivot) && (left < right)) {
            left++;
        }
        if (left != right) {
            array[right] = array[left];
            right--;
        }
    }
    array[left]=pivot;
    pivot=left;
    left=l_hold;
    right=r_hold;
    if (left < pivot) {
        QSort(array, left, pivot - 1);
    }
    if (right > pivot) {
        QSort(array, pivot + 1, right);
    }
}

#endif //RPM_LABA_5_QSORT_H