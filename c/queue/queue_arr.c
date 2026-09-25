#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1, rear=-1, queue[MAX];

void enqueue() {
    if(rear == MAX-1) {
        printf("Overflow occurred\n");
        return;
    }
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    queue[++rear] = value;
}

void dequeue() {
    if(front >= rear) {
        printf("Underflow occurred\n");
        return;
    }
    front++;
}

void display() {
    if(front>=rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements of queue are: ");
    for(int i=front+1; i<=rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY \n4.EXIT \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid input");
        }
    }
}