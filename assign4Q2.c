//Stack implementation using linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node*next;
}Node;

Node*top=NULL;

int isEmpty()
{
    if (top==NULL)
    {
    printf ("Stack is Empty.\n");
    }
    else
    {
    printf ("Stack is not Empty.\n");
    }
}

void push(int value)
{
    Node *newNode = (Node*)malloc(sizeof(Node));

    if(!newNode)
    {
        printf ("Memory Error.\n");
    }
    else
    {
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        printf ("pushed %d to Stack.\n", value);
    }
}

void pop()
{
    if (top==NULL)
    {
        printf("Stack Underflow! Cannot pop.\n");
    }
    else
    {
        Node*temp = top;
        printf("popped %d from Stack.\n", temp->data);
        top = top->next;
        free (temp);
    }
}

void peek()
{
    if (top==NULL)
    {
        printf ("Stack is empty, nothing to peek.\n");
    }
    else
    {
        printf ("top of Stack is %d\n", top->data);
    }
}

int main()
{
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    peek();

    pop();
    peek();

    push(60);
    peek();

    while (top!= NULL)
    {
        pop();
    }
    peek();

    printf ("Question 2 is Successfully executed.\n");
    printf("Vaishnavi Singh, 590011338");

    return 0;
}