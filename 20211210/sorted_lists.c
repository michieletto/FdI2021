#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* next;    
};

struct node* node_create(int value) {
    struct node* node = malloc(sizeof(node));
    if (node) {
        node->value = value;
        node->next = NULL;
    }
    return node;
}

void list_destroy(struct node *head) {
    struct node *current = NULL;
    while (head != NULL) {
        current = head;
        head = head->next;
        free(current);
    }
}

void list_print(struct node* head) {
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

struct node *predecessor(struct node *head, int value)
{
    struct node *pred = head;

    if (pred->value >= value)
        return NULL;
    while (pred->next && (pred->next->value < value)) {
        pred = pred->next;
    }

    return pred;
}

struct node *list_add(struct node *head, int value)
{
    struct node *node = node_create(value);
    if (!node)
        return NULL;

    struct node *pred = predecessor(head, value);

    if (pred == NULL) {
        // no value smaller than 'value'
        // our node will be the new head
        node->next = head;
        return node;
    }

    node->next = pred->next;
    pred->next = node;

    return head;
}

int main(void)
{
    struct node *head = node_create(7);
    list_print(head);

    head = list_add(head, 5);
    list_print(head);
    head = list_add(head, 38);
    list_print(head);
    head = list_add(head, 53);
    list_print(head);
    head = list_add(head, 33);
    list_print(head);
    head = list_add(head, 2);
    list_print(head);

    list_destroy(head);
    head = NULL;

    return 0;
}
