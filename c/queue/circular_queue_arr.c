#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front = -1, rear = -1;
int queue[MAX];

void enqueue() {
    int value;
    if(((rear + 1) % MAX) == front){
        printf("Overflow occurred\n");
        return;
    }
    if(front == -1)
        front = 0;
    rear = (rear + 1) % MAX;
    printf("Enter the value: ");
    scanf("%d", &value);
    queue[rear] = value;
    printf("Inserted successfully\n");
}

void dequeue() {
    if(rear == -1){
        printf("Underflow occurred\n");
        return;
    }
    if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
    printf("Deleted successfully\n");
}

void display() {
    if(rear == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements of queue: ");
    int i = front;
    while(1){
        printf("%d ", queue[i]);
        if(i == rear)
            break;
        else
            i = (i+1) % MAX;
    }
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
            default: printf("Invalid input\n");
        }
    }
    return 0;
}