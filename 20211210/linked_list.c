#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void print_list(struct node* head) {
    while (head != NULL) {
       printf("%d", head->value);
       head = head->next;
       if (head != NULL) {
           printf(" -> ");
       } else {
           printf("\n");
       } 
    }
}

int main (void) {
    struct node a, b, c;

    a.value = 5;
    a.next = &b;

    b.value = 7;
    b.next = &c;

    c.value = 53;
    c.next = NULL;

    print_list(&a);

    return 0;
}