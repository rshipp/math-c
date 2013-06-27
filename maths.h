/* maths.h
 * some arbitrary math functions
 */

#include <stdio.h>

/* count by x, from 0 to e */
void countby(int x, int e) {
    int n;

    for(n = 0; n <= e; n += x)
        printf("%d ", n);
    printf("\n");

    return;
}

/* calculate continued fractions 
 */
double cfrac(int a, int n) { 
    int k = 1;
    double c = a + 1.000 / a; /* This has got to be wrong. */

    c = a + 1.000 / c;        /* I'll look up the formula and see how */
    while(++k < n-1) {        /* I can make this better. */
        c = a + 1.000 / c;
    }

    return c;
}

/* two implementations of a factorial function 
 * accurate only with 0 < n < 12
 */
int factorial_r(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial_r(n - 1);
    }
}

int factorial_f(int n) {
    int i;

    for (i = n - 1; i > 1; i--) {
        n = n * i;
    }

    return n;
}
