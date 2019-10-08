#include <stdio.h>

#include "calc_macros.h"

#ifdef ADD
# define OP(x, y) _ADD(x ,y)
#elif SUB
# define OP(x, y) _SUB(x, y)
#elif MUL
# define OP(x, y) _MUL(x, y) 
#elif DIV
# define OP(x, y) _DIV(x, y)
#endif

int main() {
    printf("%d\n", OP(20, 10));
}
