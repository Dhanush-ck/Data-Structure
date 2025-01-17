#include <iostream>
using namespace std;
typedef struct node {
    int data;
    node* next;
}Node;
class LinkedList
{
public:
    Node* createLL() {
        Node* HEAD = new Node;
        HEAD->data = 0;
        HEAD->next = NULL;
        return HEAD;
    }

    void getData(Node* HEAD) {
        int n, data, i=0;
        cout<<"Enter the number of nodes : ";
        cin>>n;
        Node* Temp = HEAD;
        cout<<"Enter " <<n<<" values in sorted order"<<endl;
        while(i<n) {
            Node* ptr = new Node;
            ptr->next = NULL;
            cin>>data;
            ptr->data = data;
            Temp->next = ptr;
            Temp = Temp->next;
            i++;
        }
        cout<<"Linked List created"<<endl;
    }

    void sort(Node* HEAD1, Node* HEAD2, Node* HEAD) {
        Node* Temp1 = HEAD1->next;
        Node* Temp2 = HEAD2->next;
        Node* Temp = HEAD;
        while(Temp1 != NULL && Temp2 != NULL) {
            Node* ptr = createLL();
            if(Temp1->data == Temp2->data){
                ptr->data = Temp1->data;
                Temp1 = Temp1->next;
                Temp2 = Temp2->next;
            }
            else if(Temp1->data < Temp2->data) {
                ptr->data = Temp1->data;
                Temp1 = Temp1->next;
            }
            else {
                ptr->data = Temp2->data;
                Temp2 = Temp2->next;
            }
            Temp->next = ptr;
            Temp = Temp->next;
        }
        while(Temp1 != NULL) {
            Node* ptr = createLL();
            ptr->data = Temp1->data;
            Temp1 = Temp1->next;
            Temp->next = ptr;
            Temp = Temp->next;
        }
        while(Temp2 != NULL) {
            Node* ptr = createLL();
            ptr->data = Temp2->data;
            Temp2 = Temp2->next;
            Temp->next = ptr;
            Temp = Temp->next;
        }
    }

    void display(Node* HEAD) {
        Node* Temp = HEAD->next;
        while(Temp != NULL) {
            cout<<Temp->data<<" ";
            Temp = Temp->next;
        }
    }

    void coreMethod() {
        Node* LL1 = createLL();
        getData(LL1);
        Node* LL2 = createLL();
        getData(LL2);
        Node* LL3 = createLL();
        sort(LL1, LL2, LL3);
        display(LL3);
    }
};

int main() {
    LinkedList LL;
    LL.coreMethod();
    return 0;
}