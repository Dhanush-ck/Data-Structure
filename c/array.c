#include<stdio.h>
#define MAX 100
void insert(int *arr, int *n) {
    int i, pos, val;
    printf("\nEnter the position to be inserted: ");
    scanf("%d", &pos);
    if(pos>(*n)+1){
        printf("Invalid position\n");
        return;
    }
    printf("Enter the value to be inserted: ");
    scanf("%d", &val);
    for(i=*n; i>pos-1; i--) {
        arr[i] = arr[i-1];
    }
    arr[i] = val; 
    (*n)++;
    printf("\nElement inserted successfully\n");
}

void delete(int *arr, int *n){
    int i, pos;
    printf("\nEnter the position to be deleted: ");
    scanf("%d", &pos);
    if(pos>*n){
        printf("Invalid position\n");
        return;
    }
    for(i=0;i<pos-1;i++);
    for(;i<*n;i++) {
        arr[i] = arr[i+1];
    }
    (*n)--;
    printf("\nElement deleted successfully\n");
}

void display(int *arr, int n) {
    printf("\nThe elements are: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void search(int *arr, int n) {
    int flag = 0, i, key;
    printf("\nEnter the key to be searched: ");
    scanf("%d", &key);
    for(i=0; i<n; i++) {
        if(arr[i] == key){
            printf("Key found at position %d\n", i+1);
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Key not found\n");
    }
}

int main() {
    int arr[MAX], n, i, choice, ch=1;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    do {
        printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Search \n5.Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                insert(arr, &n);
                break;
            case 2:
                delete(arr, &n);
                break;
            case 3: 
                display(arr, n);
                break;
            case 4:
                search(arr, n);
                break;
            case 5:
                ch=0;
                break;
            default:
                printf("Invalid input");
                break;
        }
    }while(ch==1);
    return 0;
}