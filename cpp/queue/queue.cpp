#include<iostream>
using namespace std;
class Queue {
public : 
    void create(int &size, int &front, int &rear){
        cout<<"Enter the size of the queue : ";
        cin>>size;
        front = rear = -1;
    }

    void insert(int array[], int &size, int &rear, int key) {
        if(rear<size-1) {
            rear++;
            array[rear] = key;
            cout<<"Insertion done!"<<endl;
        }
        else 
            cout<<"Overflow occured!!!"<<endl;
    }

    void remove(int array[], int &size, int &front, int &rear) {
        if(front>=rear) 
            cout<<"Underflow occured!!!"<<endl;
        else {
            front++;
            cout<<"Deletion done!"<<endl;
        }
    }

    void coreMethod() {
        int n, front, rear, selection;
        char ch;
        create(n, front, rear);
        int queue[n];
        do {
            cout<<"1.INSERT"<<endl<<"2.DELETE"<<endl<<"3.DISPLAY"<<endl<<"Choose your operation : ";
            cin>>selection;
            menu(queue, n, front, rear, selection);
            cout<<"Do you want to repeat?(Y/N) : ";
            cin>>ch;
        }while(ch=='Y'||ch=='y');
    }
    
    void menu(int array[], int &n, int &front, int &rear, int &choice) {
        switch(choice) {
            case 1: 
                int num;
                cout<<"Enter the element to be inserted : ";
                cin>>num;
                insert(array, n, rear, num);
                break;
            case 2:
                remove(array, n, front, rear);
                break;
            case 3:
                if(front>=rear)
                    cout<<"Stack is empty"<<endl;
                else {
                    cout<<"Elements in the stack"<<endl;
                    for(int i=front+1;i<=rear; i++)
                        cout<<array[i]<<" ";
                    cout<<endl;
                }
                break;
            default:
                cout<<"Invalid option selected";

        }
    }
};

int main() {
    Queue Q;
    Q.coreMethod();
    return 0;
}