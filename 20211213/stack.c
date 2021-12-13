#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int *contets;
    int strack_size;
    int top;
} Stack;

void initStack(Stack *s, int size) {
    s->contets = (int*) malloc(size * sizeof(int));
    s->strack_size = size;
    s->top = 0;
}

void releaseStack(Stack *s) {
    free(s->contets);
    s->strack_size = 0;
    s->top = 0;
    s->contets = NULL;
}

void makeEmpty(Stack *s) {
    s->top = 0;
}

bool isEmpty(Stack *s) {
    return s->top == 0;
}

bool isFull(Stack *s) {
    return s->top == s->strack_size;
}

void push(Stack *s, int i) {
    if (s->contets == NULL) {
        printf("Stack not initialized\n");
        exit(EXIT_FAILURE);
    }
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    else
        s->contets[s->top++] = i;
}

int pop (Stack *s) {
    if (s->contets == NULL) {
        printf("Stack not initialized\n");
        exit(EXIT_FAILURE);
    }
   if(isEmpty(s)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
   } 
   else
    return s->contets[--s->top];
}

int main() {
    Stack s;
    initStack(&s, 10);
    printf("Filling the stack with some values\n");
    int val = 0;

    while (!isFull(&s))
    {
        printf("Operation: push(%d)\n", val);
        push(&s, val++);
    }
    printf("Now the stack is full\n");

    while (!isEmpty(&s))
    {
        printf("Operation: pop(), extracted value is %d\n", pop(&s));
    }
    printf("Now the stack is empty\n");

    releaseStack(&s);

    exit(EXIT_SUCCESS);
}