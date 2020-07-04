#include <stdio.h>
#include <stdlib.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int  b,int  c,int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a,int  b,int  c,int d){
int array[4]={a , b , c ,d};
int max=-99999;
for (int i=0 ; i<4;i++){
    if (array[i]>max){
        max=array[i];
    }
    
}
return max;

}
