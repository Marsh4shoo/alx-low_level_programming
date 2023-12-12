#include "search_algorithms.h"

/**
 * custom_linear_search - finds a value in an integer array using Linear Search
 * @arr: the integer array
 * @len: length of the array
 * @target: the value to find
 * Return: the index of the first occurrence of the target or -1 if not found
 */
int custom_linear_search(int *arr, size_t len, int target) {
    size_t index;

    if (!arr)
        return (-1);

    for (index = 0; index < len; index++) {
        printf("Checked value at index %ld = [%d]\n", index, arr[index]);
        if (arr[index] == target)
            return (index);
    }
    
    return (-1);
}

