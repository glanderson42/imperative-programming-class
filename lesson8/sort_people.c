#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMPARE(x, y) x.age == y.age ? 0 : ((x.age < y.age) ? -1 : 1)

typedef enum {
    MALE = 0,
    FEMALE = 1
} gender;

typedef struct person {
    char name[20];
    int age;
    gender gend;
} person;

void swap_person(person* p1, person* p2) {
    person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void sort(person* people, int size) {
    for(int i = 0; i < size - 1; ++i) {
        for(int j = 0; j < size - i - 1; ++j) {
            if(COMPARE(people[j], people[j + 1]) == 1) {
                swap_person(&people[j], &people[j + 1]);
            }
        }
    }
}

int main() {
    printf("number of people: ");
    int num_of_ppl;
    scanf("%d", &num_of_ppl);
    person* people = (person*)malloc(num_of_ppl);

    for(int i = 0; i < num_of_ppl; ++i) {
        printf("Name: ");
        scanf("%s", &people[i].name);
        printf("Age: ");
        scanf("%d", &people[i].age);
        printf("Gender: ");
        char gen[10];
        scanf("%s", &gen);
        if(strcmp(gen, "male") == 0) {
            people[i].gend = MALE;
        } else {
            people[i].gend = FEMALE;
        }
    }

    sort(people, num_of_ppl);
    for(int i = 0; i < num_of_ppl; ++i) {
        printf("Name : %s || Age : %d", people[i].name, people[i].age);
        if(people[i].gend == MALE) {
            printf("|| Gender: Male\n");
        } else {
            printf("|| Gender: Female\n");
        }
    }

    free(people);
}