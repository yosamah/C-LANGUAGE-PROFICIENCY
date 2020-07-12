#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
double p[1000];
double s[1000];
void sort_by_area(triangle* tr, int n)
{
    
    for (int i = 0; i < n; i++) {
        double l = ((double) tr[i].a + (double)tr[i].b + (double)tr[i].c);
        p[i] =  l/ 2;
        double o = (p[i]) * (p[i] - tr[i].a) * (p[i] - tr[i].b) * (p[i] - tr[i].c);
        s[i] = sqrt(o);
    }
    triangle u;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] > s[j]) {
                
                u = tr[i];
                tr[i] = tr[j];
                tr[j] = u;
                double temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    /**
    * Sort an array a of the length n
    */
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}