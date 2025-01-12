#include<iostream>
using namespace std;
typedef struct node {
    int data;
    node* next;
}Node;
class LinkedList 
{
    int n, data;
public:
    Node* createLL() {
        Node* HEAD = new Node;
        HEAD->data = 0;
        HEAD->next = NULL;
        return HEAD;
    }
    
    void insertEnd(Node* HEAD, int key) {
        Node* ptr = new Node;
        ptr->data = key;
        ptr->next = NULL;
        if(HEAD->next == NULL) {
            HEAD->next = ptr;
        }
        else {
            Node* Temp = HEAD;
            while(Temp->next!= NULL) {
                Temp = Temp->next;
            }
            Temp->next = ptr;
        }
        cout<<"Node added at the end"<<endl;
    }

    void insertFirst(Node* HEAD, int key) {
        Node* ptr = new Node;
        ptr->data = key;
        ptr->next = HEAD->next;
        HEAD->next = ptr;
        cout<<"Node added at the beginning"<<endl;
    }

    void insertCustom(Node* HEAD, int key) {
        int n, i=0;
        cout<<"Enter the position for insertion : ";
        cin>>n;
        if(HEAD->next == NULL) {
            cout<<"Linked List is empty"<<endl;
        }
        else {
            Node* ptr = new Node;
            ptr->data = key;
            ptr->next = NULL;
            Node* Temp = HEAD;
            while((i<n) && (Temp->next != NULL)) {
                Temp = Temp->next;
                i++;
            }
            if(i!=n){
                cout<<"Position "<<i<<" not available"<<endl;
                delete ptr;
                return;
            }
            ptr->next = Temp->next;
            Temp->next = ptr;
            cout<<"Node added at position "<<n<<endl;
        }
    }

    void removeEnd(Node* HEAD) {
        if(HEAD->next == NULL) {
            cout<<"Linked List is empty";
        }
        else {
            Node* Temp = HEAD;
            while((Temp->next)->next != NULL) {
                Temp = Temp->next;
            }
            Node* DEL = Temp->next;
            delete DEL;
            Temp->next = NULL;
            cout<<"Last node removed successfully"<<endl;
        }
    }

    void removeFirst(Node* HEAD) {
        if(HEAD->next == NULL) {
            cout<<"Linked List is empty";
        }
        else {
            Node* DEL = HEAD->next;
            HEAD->next = DEL->next;
            delete DEL;
            cout<<"First node removed successfully"<<endl;
        }
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