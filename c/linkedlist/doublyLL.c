#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

Node *head = NULL;

void insertAtBeginning(int value) {
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("Inserted successfully\n");
}


void insertAtEnd(int value) {
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL) {
        head = newNode;
    }
    else {
        struct Node *node;
        node = head;
        while(node->next!=NULL) {
            node = node->next;
        }
        node->next = newNode;
        newNode->prev = node;
    }
    printf("Inserted successfully\n");
}

void insertAtPos(int value) {
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    int posTracker=0;
    struct Node *node;
    node = head;
    if(head == NULL) {
        head = newNode;
    }
    else {
        while(node->next!=NULL && posTracker<pos-1) {
            node = node->next;
            posTracker++;
        }
    
        if(node->next == NULL) {
            node->next = newNode;
            newNode->prev = node;
        }
        else {
            newNode->next = node->next;
            newNode->prev = node;
            node->next = newNode;
            (newNode->next)->prev = newNode;
        }   
    }
    printf("Inserted successfully\n");
}

void deleteBeginning() {
    if(head == NULL) {
        printf("Underflow occurred\n");
        return;
    }
    if(head->next == NULL) 
        head = NULL;
    else {
        struct Node *temp;
        temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        free(temp);
    }
    printf("Deleted successfully");
}

