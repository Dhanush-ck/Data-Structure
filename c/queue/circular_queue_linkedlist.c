#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node *front = NULL, *rear = NULL;

void enqueue() {
    int value;
    Node *newNode = malloc(sizeof(Node));
    printf("Enter the value: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;
    if(rear == NULL) {
        front = rear = newNode;
        newNode->next = front;
    }
    else {
        rear->next = newNode;
        rear = rear->next;
        rear->next = front;
    }
    printf("Inserted successfully\n");
}

void dequeue() {
    if(front == NULL) {
        printf("Underflow occurred\n");
        return;
    }
    if(front==rear)
        front = rear = NULL;
    else{
        front = front->next;
        rear->next = front;
    }
    printf("Deleted successfully\n");
}

void display() {
    if(front==NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements are: ");
    Node *temp = front;
    while(1) {
        printf("%d ", temp->data);
        temp = temp->next;
        if(temp==front)
            break;
    }
    printf("\n");
}

void main() {
    int choice;
    while(1) {
        printf("\n1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY \n4.EXIT \n");
        printf("Enter the choice: ");
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
}
