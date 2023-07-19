# 0x0F. C - Function pointers

## Files:

1. 0-print_name.c
   - Function that prints a name.

2. 1-array_iterator.c
   - Function that executes a function given as a parameter on each element of an array.
     - where **size** is the size of the array
     - and **action** is a pointer to the function you need to use

3. 2-int_index.c
   - Function that searches for an integer.
     - where size is the number of elements in the array array
     - cmp is a pointer to the function to be used to compare values
     - int_index returns the index of the first element for which the cmp function does not return 0
     - If no element matches, return -1
     - If size <= 0, return -1

