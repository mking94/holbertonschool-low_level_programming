#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers using the Binary search algorithm
 * @size: The array length.
 * @value: The value that be find its index;
 */
 
int linear_search(int *array, size_t size, int value){
    int i = 0;
    if(array == NULL){
        return -1;
    }
    while(i < size && array[i] != value){
        i++;
    }
    if(array[i] == value){
        return i;
    }
    return -1;
}
