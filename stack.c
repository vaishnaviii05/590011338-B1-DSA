#include <stdio.h>
#define MAX 5  // Maximum size of the stack

int stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Unable to push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed onto the stack\n", value);
    }
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! Unable to pop\n");
        return -1;
    } else {
        int poppedValue = stack[top];
        top--;
        return poppedValue;
    }
}

// Function to display the stack
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function to demonstrate stack operations
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50); // This will fill the stack

    display(); // Display stack elements

    int poppedValue = pop();
    printf("Popped value: %d\n", poppedValue);

    display(); // Display after popping

    printf("Vaishnavi Singh, SAP-590011338");

    return 0;
}