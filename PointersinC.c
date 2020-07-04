#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



void update(int *a,int *b) {
    // Complete this function
    int s = *a;
    *a  = *a + *b;
    
    *b  = abs(s - *b);

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
