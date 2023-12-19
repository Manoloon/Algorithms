//
// Created by Manoloon on 19/12/2023.
//

#ifndef ALGORITHMS_SORTALGORITHMS_H
#define ALGORITHMS_SORTALGORITHMS_H
#include <vector>

template<typename T>
void SelectionSort(T arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

// QuickSort
template<typename T>
int Partition(T arr[],int StartIndex,int EndIndex)
{
    // tomamos como pivot el primer dato de la matrix
    int pivot = arr[StartIndex];
    // Sublista derecha e izquierda estan vacias al comienzo.
    int middleIndex = StartIndex;
    // iteramos la matrix como 1 , n , -1;
    for(int i = StartIndex+1 ; i <= EndIndex;i++)
    {
        if(arr[i] < pivot)
        {
            //este item de la matrix se encuentra en la lista izquierda.
            //preparamos el asiento cambiando el indice medio.
            ++middleIndex;
            //intercambiamos el miembro de la lista de la derecha por el miembro de la lista izquierda.
            std::swap(arr[i], arr[middleIndex]);
        }
    }
    // por ahora el dato de la matrix con indice medio es parte de la lista de la derecha, lo intercambiamos por el item de la lista de la izquierda.
    std::swap(arr[StartIndex], arr[middleIndex]);
    // y devolvemos el pivot para ser usado en el proximo Quicksort.
    return middleIndex;
}

void QuickSort(int arr[], int StartIndex,int EndIndex)
{
    if(StartIndex< EndIndex)
    {
        int pivotIndex = Partition(arr, StartIndex, EndIndex);
        QuickSort(arr, StartIndex, pivotIndex - 1);
        QuickSort(arr, pivotIndex + 1, EndIndex);
    }
}
#endif //ALGORITHMS_SORTALGORITHMS_H
