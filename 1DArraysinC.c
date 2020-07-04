#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf(" %d", &n);

    int array[n];
    int sum=0;


    for (int i=0;i<n ;i++){
        scanf (" %d", &array[i]);
        sum+=array[i];
    } 


    printf("%d \n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
