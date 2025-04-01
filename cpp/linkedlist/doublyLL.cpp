#include<iostream>
using namespace std;
typedef struct node {
    int data;
    node* next;
    node* prev;
}Node;
class LinkedList 
{
    int n, data;
public:
    Node* createLL() {
        Node* HEAD = new Node;
        HEAD->data = 0;
        HEAD->next = NULL;
        HEAD->prev = NULL;
        return HEAD;
    }
    
    void insertEnd(Node* HEAD, int key) {
        Node* ptr = new Node;
        ptr->data = key;
        ptr->next = NULL;
        if(HEAD->next == NULL) {
            HEAD->next = ptr;
            ptr->prev = HEAD;
            cout<<"Node added at the end"<<endl;
            return;
        }
        Node* Temp = HEAD;
        while(Temp->next!= NULL) {
            Temp = Temp->next;
        }
        Temp->next = ptr;
        ptr->prev = Temp;
        cout<<"Node added at the end"<<endl;
    }

    void insertFirst(Node* HEAD, int key) {
        Node* ptr = new Node;
        ptr->data = key;
        if(HEAD->next == NULL) {
            ptr->next = NULL;
            ptr->prev = HEAD;
            HEAD->next = ptr;
            cout<<"Node added at the beginning"<<endl;
            return;
        }
        ptr->next = HEAD->next;
        (HEAD->next)->prev = ptr;
        HEAD->next = ptr;
        ptr->prev = HEAD;
        cout<<"Node added at the beginning"<<endl;
    }

    void insertCustom(Node* HEAD, int key) {
        int pos, i=0;
        cout<<"Enter the position for insertion : ";
        cin>>pos;
        if(pos == 0) {
            cout<<"Please use the option 1 to insert at the beginning"<<endl;
            return;
        }
        Node* ptr = new Node;
        ptr->data = key;
        Node* Temp = HEAD;
        while((i<pos) && (Temp->next != NULL)) {
            Temp = Temp->next;
            i++;
        }
        if(Temp->next == NULL) {
            cout<<"Please use option 2 to insert at the end"<<endl;
            return;
        }
        if(i!=pos){
            cout<<"Position "<<i<<" not available"<<endl;
            delete ptr;
            return;
        }
        ptr->next = Temp->next;
        (Temp->next)->prev = ptr;
        ptr->prev = Temp;
        Temp->next = ptr;
        cout<<"Node added after position "<<pos<<endl;
    }

    void removeEnd(Node* HEAD) {
        if(HEAD->next == NULL) {
            cout<<"Linked List is empty"<<endl;
            return;
        }
        Node* Temp = HEAD;
        while((Temp->next)->next != NULL) {
            Temp = Temp->next;
        }
        Node* DEL = Temp->next;
        DEL->prev = NULL;
        delete DEL;
        Temp->next = NULL;
        cout<<"Last node removed successfully"<<endl;
    }

    void removeFirst(Node* HEAD) {
        if(HEAD->next == NULL) {
            cout<<"Linked List is empty"<<endl;
            return;
        }
        Node* DEL = HEAD->next;
        if(DEL->next == NULL) {
            HEAD->next = NULL;
            delete DEL;
            cout<<"First node removed successfully"<<endl;
            return;
        }
        HEAD->next = DEL->next;
        (DEL->next)->prev = HEAD;
        delete DEL;
        cout<<"First node removed successfully"<<endl;
    }

    void display(Node* HEAD) {
        if(HEAD->next == NULL) {
            cout<<"Linkedlist is null"<<endl;
        }
        else {
            Node* Temp = HEAD->next;
            while(Temp != NULL) {
                cout<<Temp->data<<" ";
                Temp = Temp->next;
            }
            cout<<"Null"<<endl;
        }
    }

    void menu(Node* LL) {
        cout<<"\n1.Insertion at the beginning\n2.Insertion at the end\n3.Insertion at custom position\n4.Deletion from the beginning\n5.Deletion from the end\n6.Display";
        cout<<endl<<"Enter your choice : ";
        cin>>n;
        switch(n) {
            case 1:
                cout<<"Enter the data : ";
                cin>>data;
                insertFirst(LL, data);
                break;
            case 2: 
                cout<<"Enter the data : ";
                cin>>data;
                insertEnd(LL, data);
                break;
            case 3: 
                cout<<"Enter the data : ";
                cin>>data;
                insertCustom(LL, data);
                break;
            case 4: 
                removeFirst(LL);
                break;
            case 5: 
                removeEnd(LL);
                break;
            case 6: 
                display(LL);
                break;
            default: 
                cout<<"Invalid input!"<<endl;
        }
    }

    void coreMethod() {
        Node* LL = createLL();
        string ch;
        do {
            menu(LL);
            cout<<"Do you want to continue?(Y/n) : ";
            cin>>ch;
        }while(ch == "Y" || ch == "y");
    }
};
int main() {
    LinkedList LLO;
    LLO.coreMethod();
    return 0;
}