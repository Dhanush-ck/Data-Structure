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
    Node* createLL();
    void insertFirst(Node*, int);
    void insertEnd(Node*, int);
    void insertCustom(Node*, int);
    void removeFirst(Node*);
    void removeEnd(Node*);
    void display(Node*);
    void menu(Node*);
    void coreMethod();
};

Node* LinkedList::createLL() {
    Node* HEAD = new Node;
    HEAD->data = 0;
    HEAD->next = HEAD;
    return HEAD;
}

void LinkedList::insertFirst(Node* HEAD, int key) {
    Node* ptr = new Node;
    ptr->data = key;
    if(HEAD->next == HEAD) {
        HEAD->next = ptr;
        ptr->next = HEAD;
        cout<<"Node added at the beginning"<<endl; 
        return;
    }
    ptr->next = HEAD->next;
    HEAD->next = ptr;
    cout<<"Node added at the beginning"<<endl; 
}

void LinkedList::insertEnd(Node* HEAD, int key) {
    Node* ptr = new Node; 
    ptr->data = key;
    ptr->next = HEAD;
    if(HEAD->next == HEAD) {
        HEAD->next = ptr;
        cout<<"Node added at the end "<<endl;
        return;
    }
    Node* Temp = HEAD;
    while(Temp->next != HEAD) {
        Temp = Temp->next;
    }
    Temp->next = ptr;
    cout<<"Node added at the end "<<endl;
}

void LinkedList::insertCustom(Node* HEAD, int key) {
    int pos, i=0;
    Node* ptr = new Node;
    ptr->data = key;
    cout << "Enter the position : ";
    cin>>pos;
    Node* Temp = HEAD;
    while((i < pos) && (Temp->next != HEAD)) {
        Temp = Temp->next;
        i++;
    }
    if(i != pos) {
        cout<<"Position "<<pos<<" not available"<<endl;
        delete ptr;
        return;
    }
    ptr->next = Temp->next;
    Temp->next = ptr;
    cout<<"Node added after the position "<<pos<<endl;
}

void LinkedList::removeFirst(Node* HEAD) {
    if(HEAD->next == HEAD) {
        cout<<"LinkedList is empty"<<endl;
        return;
    }
    Node* DEL = HEAD->next;
    HEAD->next = DEL->next;
    delete DEL;
    cout<<"First node removed successfully"<<endl;
}

void LinkedList::removeEnd(Node* HEAD) {
    if(HEAD->next == HEAD) {
        cout<<"LinkedList is empty"<<endl;
        return;
    }
    Node* Temp = HEAD;
    while((Temp->next)->next != HEAD) {
        Temp = Temp->next;
    }
    Node* DEL = Temp->next;
    Temp->next = HEAD;
    delete DEL;
    cout<<"Last node removed successfully"<<endl;
}

void LinkedList::display(Node* HEAD) {
    if(HEAD->next == HEAD) {
        cout<<"LinkedList is empty"<<endl;
        return;
    }
    Node* Temp = HEAD->next;
    do{
        cout<<Temp->data<<" ";
        Temp = Temp->next;
    }while(Temp != HEAD);
    cout<<"~"<<endl;
}

void LinkedList::menu(Node* LL) {
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

void LinkedList::coreMethod() {
    Node* LL = createLL();
    string ch;
    do {
        menu(LL);
        cout<<"Do you want to continue?(Y/n) : ";
        cin>>ch;
    }while(ch == "Y" || ch == "y");
}

int main() {
    LinkedList CLL;
    CLL.coreMethod();
    return 0;
}