#include "rec_fact.h"

long int factorial(int n) {
    if(n >= 1) {
        return n * factorial(n - 1);
    }

    return 1;
}
