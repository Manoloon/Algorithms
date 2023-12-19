#include <iostream>
#include <string>
#include "Src/Union_Find.h"
#include "Src/SortAlgorithms.h"

#define ArraySize(Array) (sizeof(Array) / sizeof((Array)[0]))

int main() {
    int Array[] = { 25,23,41,20,1 };
    std::string StringArr[] = {"Z","C","A","B"};
    float FArray[] = {1.3,4.5,10.6,100.3,65.3,3.2};
    int arrSize = ArraySize(FArray);

    std::cout << "Initial list: ";
    for (int i=0;i<arrSize;i++)
        std::cout << FArray[i] << " ";
    std::cout << std::endl;

    //QuickSort(Array, 0, arrSize - 1);
    SelectionSort(FArray,arrSize);
    std::cout << "Array organizada: ";
    for (int i = 0;i<arrSize;i++)
        std::cout << FArray[i] << " ";
    std::cout << std::endl;

    return 0;
}
