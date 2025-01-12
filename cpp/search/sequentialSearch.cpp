#include<iostream>
using namespace std;
class searchClass 
{
public :
    void getSize(int &size) {
        cout<<"Enter the number of elements in array : ";
        cin>>size;
    }

    void getElements(int array[], int &size){
        cout<<"Enter "<<size<<" elements"<<endl;
        for(int i=0; i<size; i++) {
            cin>>array[i];
        }
    }
    void getKey(int &k) {
        cout<<"Enter the key to find : ";
        cin>>k;
    }

    void seqSearch(int arr[], int n, int key) {
        int flag;
        for(int i=0; i<n; i++) {
            if(arr[i] == key) {
                cout<<key<<" found at index "<<i<<endl;
                flag = 1;
            }
        }
        if(flag != 1)
            cout<<"Key not found"<<endl;
    }

    void coreMethod() {
        int n;
        getSize(n);
        int arr[n];
        getElements(arr, n);
        int key;
        getKey(key);
        seqSearch(arr, n, key);
    }

};

int main() {
    searchClass SC;
    SC.coreMethod();
    return 0;
}