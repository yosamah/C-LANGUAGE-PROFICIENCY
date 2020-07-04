#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>



int main() {
    int n;
    int k;

    scanf(" %d", &n);
    scanf(" %d", &k);

    int maxa = 0;
    int maxo = 0;
    int maxe = 0;
    int ansa, anso, anse;

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            ansa = i & j;
            anso = i | j;
            anse = i ^ j;
            if (ansa > maxa && ansa < k) {
                maxa = ansa;
            }
            if (anso > maxo && anso < k) {
                maxo = anso;
            }
            if (anse > maxe && anse < k) {
                maxe = anse;
            }
        }

    }
    printf("%d \n%d \n%d \n", maxa, maxo, maxe);
}
