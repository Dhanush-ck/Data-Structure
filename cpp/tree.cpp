#include <iostream>
using namespace std;
class Tree {
public:
    void getSize(int &n) {
        cout<<"Enter the number of elements : ";
        cin >>n;
        n++;
    }
    void getArray(int arr[], int &n) {
        cout<<"Enter "<<n-1<<" elements"<<endl;
        for(int i=1; i<n; i++)
            cin>>arr[i];
    }
    void inorder(int index, int arr[], int n) {
        if(index < n) {
            inorder(2*index, arr, n);
            cout<<arr[index]<<" ";
            inorder((2*index)+1, arr, n);
        }
    }
    void preorder(int index, int arr[], int n) {
        if(index < n) {
            cout<<arr[index]<<" ";
            preorder(2*index, arr, n);
            preorder((2*index)+1, arr, n);
        }
    }
    void postorder(int index, int arr[], int n) {
        if(index < n) {
            postorder(2*index, arr, n);
            postorder((2*index)+1, arr, n);
            cout<<arr[index]<<" ";
        }
    }
    void core() {
        int n;
        getSize(n);
        int arr[n];
        getArray(arr, n);
        cout<<endl<<"Inorder Traversal"<<endl;
        inorder(1, arr, n);
        cout<<endl<<"Preorder Traversal"<<endl;
        preorder(1, arr, n);
        cout<<endl<<"Postorder Traversal"<<endl;
        postorder(1, arr, n);
    }
};

int main() {
    Tree T;
    T.core();
    return 0;
}
