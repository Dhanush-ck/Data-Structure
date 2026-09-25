#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void push(int *arr, int *top, int value) {
    (*top)++;
    arr[*top] = value;
    printf("Item pushed successfully\n");
}

void pop(int *arr, int *top) {
    if(*top == -1) {
        printf("Underflow occured!\n");
        return;
    }
    (*top)--;
    printf("Item popped successfully\n");
}

void display(int *arr, int top) {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Elements are: ");
    for(int i=top; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX];
    int top = -1, val, choice;
    while(1) {
        printf("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                if(top == (MAX-1)){
                    printf("Overflow occured!\n");
                    break;
                }
                printf("Enter the value to be pushed: ");
                scanf("%d", &val);
                push(arr, &top, val);
                break;
            case 2:
                pop(arr, &top);
                break;
            case 3:
                display(arr, top);
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}