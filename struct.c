#include <stdio.h>

typedef struct {
    char firstName[10];
    char secondName[10];
    char gender;
    int age;
} Person;

void describe(Person *p) {
    printf("last name: %s\n", p->firstName);
    printf("second name: %s\n", p->secondName);
    if ( p->gender == 'm' ) {
        printf("gender: male\n");
    } else {
        printf("gender: female\n");
    }
    printf("age: %d\n\n", p->age);
}

void increment(Person *p) {
    p->age += 1;
}

int main() {
    Person john = {"John", "Doe", 'm', 34};
    Person jane = {"Jane", "Doe", 'f', 25};

    describe(&john);
    increment(&john);
    describe(&john);

    return 0;
}
