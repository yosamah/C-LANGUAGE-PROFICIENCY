#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char  a_ [10];
    char  b_[10]; 
    char  as[10];
    char  bs[10];

   if (a == 1 || b == 1) {
        if (a == 1) {
            strcpy(a_, "one");;
        }
        if (b == 1) {
            strcpy(b_, "one");
        }
    }
    if (a == 2 || b == 2) {
        if (a == 2) {
            strcpy(a_, "two");
        }
        if (b == 2) {
            strcpy(b_, "two");;
        }
    }
     if (a == 3 || b == 3) {
        if (a == 3) {
            strcpy(a_, "three");
        }
        if (b == 3) {
            strcpy(b_, "three");
        }
    }
    if (a == 4 || b == 4) {
        if (a == 4) {
            strcpy(a_, "four") ;
        }
        if (b == 4) {
            strcpy(b_, "four");
        }
    }
     if (a == 5 || b == 5) {
        if (a == 5) {
            strcpy(a_,  "five");
        }
        if (b == 5) {
            strcpy( b_ , "five");
        }
    }
     if (a == 6 || b == 6) {
        if (a == 6) {
            strcpy(a_,  "six");
        }
        if (b == 6) {
            strcpy(b_ , "six");
        }
    }
    if (a == 7 || b == 7) {
        if (a == 7) {
            strcpy(a_,  "seven");
        }
        if (b == 7) {
            strcpy(b_ ,"seven");
        }
    }
     if (a == 8 || b == 8) {
        if (a == 8) {
            strcpy(a_, "eight");
        }
        if (b == 8) {
            strcpy( b_ , "eight");
        }
    }
    if ( a<1 || a >= 9 || b<1 || b >= 9) {
        if ( a<1 || a >= 9) {
            strcpy(a_, "nine");
        }
        if ( b<1 || b >= 9) {
            strcpy(b_ , "nine");
        }
    }
    if (a % 2 == 0) {
        strcpy(as , "even");
    }
    if (b % 2 == 0) {
        strcpy(bs , "even");
    }
    if (a % 2 != 0) {
        strcpy(as , "odd");
    }
    if (b % 2 != 0) {
        strcpy(bs , "odd");
    }

    printf("%s \n", a_);
    printf("%s \n",b_);
    printf("%s \n",as);
    printf("%s \n", bs);

    // Complete the code.

    return 0;
}
