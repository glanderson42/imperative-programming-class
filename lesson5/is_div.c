#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

BOOL is_div(int n, int m) {
    if(n % m == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() {

}
