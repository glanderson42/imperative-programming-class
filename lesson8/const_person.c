#include <stdio.h>

typedef struct person {
    const char name[20];
    int age;
} person;

int main() {
    person p = {
        .name = "Bela",
        .age = 20
    };
    // Forditasi hiba kovetkezik, 
    // mivel a const kulcsszo miatt
    // nemtudjuk valtoztatni az erteket
    //p.name = "Simon";
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}