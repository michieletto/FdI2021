#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN    30

typedef struct person
{
    char name[MAX_NAME_LEN + 1];
    char last_name[MAX_NAME_LEN + 1];
    int birth_year;
} person_t;

person_t *person_alloc(void) {
    return (person_t *) malloc(sizeof(person_t));
}

person_t *person_create(const char *name, const 
                        char *last_name, int 
                        b_year) {
    person_t *p = person_alloc();
    if (! p)
        return NULL;

    strncpy(p->name, name, MAX_NAME_LEN);
    p->name[MAX_NAME_LEN] = '\0';
    strncpy(p->last_name, last_name, MAX_NAME_LEN);
    p->last_name[MAX_NAME_LEN] = '\0';
    p->birth_year = b_year;

    return p;
}

void person_free(person_t *person) {
    if (person)
        free(person);
}

void person_print(person_t *person) {
    printf("%s %s (%d)", person->name,
        person->last_name, person->birth_year);
}

int main(void) {
    person_t *p1;
    
    p1 = person_create("John", "Lennon", 1940);
    if (!p1) {
        printf("ERROR: can't allocate memory!\n");
        exit(EXIT_FAILURE);
    }


    person_print(p1);
    printf("\n");

    person_free(p1);

    return 0;
}