#include <stdio.h>

#define DEFINE_PERSON(T,N) struct Person_##N{\
    T id;\
    char name[20];\
};

DEFINE_PERSON(int, int)
DEFINE_PERSON(char *, char)

#define person(N) struct Person_##N

int main() {
    person(char) tom = {.id="regjh12345",.name="Bob"};
    person(int) bob = {.id=12344,.name="Bob"};

    printf("id: %s  name: %s\n", tom.id, tom.name);
    printf("id: %d  name: %s\n", bob.id, bob.name);
}