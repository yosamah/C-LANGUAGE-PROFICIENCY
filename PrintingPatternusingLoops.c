#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int array[2000][2000];

int main()
{

    int n;
    scanf("%d", &n);
    
    int k = 2 * n - 1;
    int j = 0;
    int c = 0;
    int l = k - 1;
    int m = 0;
    int d = 0;
    int q = n;
    int b = k;

    for (int i = 1; i <= q; i++) {

        for (int o = j; o < b - 1; o++) {
            array[o][c] = n;

        }



        for (int y = m; y < b - 1; y++) {
            array[l][y] = n;

        }
        m++;


        for (int r = d; r < b; r++) {
            array[r][l] = n;



        }
        d++;
        l--;


        for (int s = j + 1; s < b - 1; s++) {
            array[c][s] = n;


        }
        j++;
        c++;
        n--;
        b--;


    }

    for (int t = 0; t < k; t++) {
        for (int f = 0; f < k; f++) {
            printf("%d ", array[t][f]);
        }
        printf("\n");
    }
    // Complete the code to print the pattern.
    return 0;
}
