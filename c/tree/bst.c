#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}Node;

Node *head = NULL;

Node *insert(Node *root,int value){
    if(root == NULL) {
        Node *newNode = malloc(sizeof(Node));
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if(value < root->data) {
        root->left = insert(root->left, value);
    }
    else if(value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

bool search(Node *root, int value) {
    if(root == NULL){
        return false;
    }
    if(root->data == value) {
        return true;
    }
    if(value > root->data) 
        return search(root->right, value);
    else
        return search(root->left, value);
}

Node *findMin(Node *root) {
    Node *current = root;
    while(current->left != NULL)
        current = current->left;
    return current;
}

Node *delete(Node *root, int value) {
    if(root == NULL)
        return root;
    if(value > root->data) 
        root->right = delete(root->right, value);
    else if(value < root->data) 
        root->left = delete(root->left, value);
    else{
        if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }
        else if(root->left == NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }
        
        Node *successor = findMin(root->right);
        root->data = successor->data;
        root->right = delete(root->right, successor->data);
    }
    return root;
}

void display(Node *root) {
    if(root == NULL)
        return;
    display(root->left);
    printf("%d ", root->data);
    display(root->right);
}

int main() {
    int value,choice;
    while(1) {
        printf("\n1.INSERTION \n2.DELETION \n3.SEARCH \n4.DISPLAY \n5.EXIT \n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the value: ");
                scanf("%d", &value);
                head = insert(head,value);
                break;
            case 2:
                printf("Enter the value: ");
                scanf("%d", &value);
                head = delete(head, value);
                break;
            case 3:
                printf("Enter the value: ");
                scanf("%d", &value);
                if(search(head, value))
                    printf("Key is in Binary Search Tree\n");
                    else
                    printf("Key is not in Binary Search Tree\n");
                break;
            case 4:
                display(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}