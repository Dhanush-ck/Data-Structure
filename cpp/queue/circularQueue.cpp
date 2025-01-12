#include<iostream> 
using namespace std;
class CircularQueue {
public :
    void create(int &size, int &front, int &rear) {
        cout<<"Enter the size of the queue : ";
        cin>>size;
        front = rear = -1;
    }

    void insert(int array[], int &size, int &front, int &rear, int &key) {
        int temp = rear;
        rear = (rear+1)%size;
        if(rear == front) {
            rear = temp;
            cout<<"Queue is full!"<<endl;
        }
        else {
            if (front==-1) 
                front =0;
            array[rear] = key;
            cout<<"Insertion done!"<<endl;
        }
    }

    void remove(int array[], int &size, int &front, int &rear) {
        if(front == -1) {
            cout<<"Queue is Empty!"<<endl;
        }
        else {
            cout<<"Deletion done!"<<endl;
            if(front == rear)
                front = rear = -1;
            else 
                front = (front+1)%size;
        }
    }

    void menu(int array[], int &size, int &front, int &rear, int &choice) {
        switch(choice) {
            case 1: 
                int num;
                cout<<"Enter a number : ";
                cin>>num;
                insert(array, size, front, rear, num);
                break;
            case 2:
                remove(array, size, front, rear);
                break;
            case 3: 
                if(front == -1)
                    cout<<"Queue is empty!"<<endl;
                else {
                    int i = front;
                     while (true) {
                        cout << array[i] << " "; 
                        if (i == rear) 
                            break; 
                        i = (i + 1) % size; 
                    }
                    cout<<endl;
                }
                break;
            default : 
                cout<<"Invalid Input!"<<endl;
        }
    }

    void coreMethod() {
        int n, front, rear, selection;
        char ch;
        create(n, front, rear);
        int arr[n];
        do {
            cout<<"1.INSERT"<<endl<<"2.DELETE"<<endl<<"3.DISPLAY"<<endl<<"Choose your operation : ";
            cin>>selection;
            menu(arr, n, front, rear, selection);
            cout<<"Do you want to repeat?(Y/N) : ";
            cin>>ch;
        }while(ch=='Y'||ch=='y');
    }
};
int main() {
    CircularQueue CQ;
    CQ.coreMethod();
    return 0;
}