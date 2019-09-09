#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {  // need to get input for amount of terms
    int i, ncount;

    double neg, pi;  // neg to make a number negative
    pi = 0;
    neg = -1;

    ncount = atoi(argv[1]);

    for (i = 1; i < ncount; i++) {
        pi = pi + pow(neg, (double)i) * (1.0 / ((2.0 * (double)i) - 1));
        i = i + 1;
    }

    printf("The approximation of pi is: %lf", pi);
    return 0;
}
