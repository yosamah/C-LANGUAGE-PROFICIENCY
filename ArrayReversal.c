#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, * arr, i;
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int* array;
    array = (int*)malloc(num * sizeof(int));
    int k = num - 1;
    for (i = 0; i < num; i++) {
        array[k] = arr[i];
        k--;
    }


    /* Write the logic to reverse the array. */

    for (i = 0; i < num; i++)
        printf("%d ", *(array + i));
    return 0;
}