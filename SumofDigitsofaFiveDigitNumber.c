#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int total = 0;
    int y = n;


    while (y != 0) {
        total += (y % 10);
        y  = y/ 10;
    }

    printf("%d", total);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
