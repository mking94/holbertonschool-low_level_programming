#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @size: The array length.
 * @value: The value that be find its index;
 */

int binary_search(int *array, size_t size, int value)
{
    if(array == NULL ){
        return -1;
    }
    int mil, start = 0, end = size;
    int test = 0; 
    while(test == 0 && start <= end){
        mil = (start + end) / 2;
        if(array[mil] == value){
            return mil;
        }
        else if(value > array[mil]){
            start = mil + 1;
        }
        else {
            end = mil - 1;
        }
    }
    return -1;
}
