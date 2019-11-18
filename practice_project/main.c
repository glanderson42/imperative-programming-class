#include <stdio.h>
#include <stdlib.h>

#include "sum.h"

typedef enum STATUS {
    ONLINE,
    OFFLINE
} STATUS;

typedef struct User {
    int id;
    char username[20];
    STATUS status;
} User;


char* get_status(STATUS s) {
    switch(s) {
        case ONLINE:
            return "ONLINE";
            break;
        case OFFLINE:
            return "OFFLINE";
            break;
        default:
            return "WRONG VALUE";
            break;
    }
}

int main() {
    int a = 10;
    int b = 20;

    printf("Sum of %d and %d is %d\n", a, b, sum(a, b));

    if(IS_NEGATIVE(sum(a, b)) == 0) {
        printf("Nem negativ\n");
    } else {
        printf("Negativ\n"); 
    }

    int size = 5;
    User* users = (User*)malloc(size * sizeof(User));
    User* user1 = (User*)malloc(sizeof(User));
    for(int i = 0; i < size; ++i) {
       users[i].id = i;
       users[i].status = ONLINE;
       scanf("%s", users[i].username);
    }

    for(int i = 0; i < size; ++i) {
       printf("id: %d username: %s status: %s\n", users[i].id,
               users[i].username,
               get_status(users[i].status)); 
    }

}
