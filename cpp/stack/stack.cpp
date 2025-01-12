#include<iostream>
using namespace std;
class Stack 
{
    int i;
public :
    void create(int &size, int &top) {
        cout<<"Enter the size of the stack : ";
        cin>>size;
        top = -1;
    }

    void push(int array[], int &n, int &top, int key) {
        if(top<n-1) {
            top++;
            array[top] = key;
        }
        else    
            cout<<"Overflow occured!!!";
    }

    void pop(int array[], int &n, int &top) {
        if(top != -1)
            top--;
            cout<<"Pop done!"<<endl;
        else 
            cout<<"Underflow occured!!!";
    }

    void coreMethod() {
        int n, top, selection;
        char ch;
        create(n, top);
        int stack[n];
        do {
        cout<<"1.PUSH"<<endl<<"2.POP"<<endl<<"3.DISPLAY"<<endl<<"Choose your operation : ";
        cin>>selection;
        menu(stack, n, top, selection);
        cout<<"Do you want to repeat?(Y/N) : ";
        cin>>ch;
        }while(ch=='Y'||ch=='y');
    }

    void menu(int array[], int &n, int &top, int choice) {
        switch(choice){
            case 1:
                int num;
                cout<<"Enter the element to be pushed : ";
                cin>>num;
                push(array, n, top, num);
                break;
            case 2: 
                pop(array, n, top);
                break;
            case 3:
                if(top == -1)
                    cout<<"Stack is empty"<<endl;
                else {
                    cout<<"Elements in the stack"<<endl;
                    for(i=0;i<=top; i++)
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
    Stack S;
    S.coreMethod();
    return 0;
}