#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    char a[1000];
    scanf(" %s",a);

    for (int i=0; i<1000 ;i++){
        if (a[i]=='\0'){
            break;
        }
        if (a[i]=='0'){
            c0++;
        }
        if (a[i]=='1'){
            c1++;
        }
        if (a[i]=='2'){
            c2++;
        }
        if (a[i]=='3'){
            c3++;
        }
        if (a[i]=='4'){
            c4++;
        }
        if (a[i]=='5'){
            c5++;
        }
        if (a[i]=='6'){
            c6++;
        }
        if (a[i]=='7'){
            c7++;
        }
        if (a[i]=='8'){
            c8++;
        }
        if (a[i]=='9'){
            c9++;
        }

    }
    printf("%d %d %d %d %d %d %d %d %d %d \n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
