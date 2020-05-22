#include <iostream>
#include <chrono>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include "random.h"
#include "TransposeSearch.h"
#include "BinarySearch.h"
#include "QSort.h"

using namespace std;
using namespace std::chrono;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int _SIZE=1000000;
    int* array = new int[_SIZE];
    srand(static_cast<unsigned int>(time(NULL)));
    for(int i=0; i<_SIZE; i++) {
        /**
         Вызов функции заполнения массива рандомным числом
         */
        array[i] = random(0, 6000000);
    }
    cout << endl;
    int* numbers = new int [40];
    cout << "Список чисел: " << endl;
    for(int i=0; i<40; i++) {
        numbers[i] = random(0, 6000000);
    }
    for(int i=0; i<40; i++) {
        cout << numbers[i] << " " << endl;
    }
    cout << endl;
    clock_t startT=clock();

    for (int i=0; i<40; i++) {
        TransposeSearch(array, _SIZE, numbers[i]);
    }
    clock_t endT=clock();
    double secondsT = (double)(endT-startT)/CLOCKS_PER_SEC;
    printf("Время поиска методом транспозиции: %f секунд\n", secondsT);
    QSort(array, 0, _SIZE);
    clock_t startB=clock();
    for (int i=0; i<40; i++) {
        BinarySearch(array, 0, _SIZE, numbers[i]);
    }
    clock_t endB=clock();
    double secondsB = (double)(endB-startB)/CLOCKS_PER_SEC;
    printf("Время бинарного поиска: %f секунд\n", secondsB);
}
