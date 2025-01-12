#include<iostream>
using namespace std;
class searchClass 
{
public:
    void getSize(int &size) {
        cout<<"Enter the number of elements in array : ";
        cin>>size;
    }

    void getElements(int array[], int &size){
        cout<<"Enter "<<size<<" elements in ascending order"<<endl;
        for(int i=0; i<size; i++) {
            cin>>array[i];
        }
    }

    void getKey(int &k) {
        cout<<"Enter the key to find : ";
        cin>>k;
    }

    void binSearch(int arr[], int l, int u, int key) {
        while(l<=u)
        {
            int mid = (l+u)/2;
            if(arr[mid] == key){
                cout<<key<<" found at index "<<mid<<endl;
                return;
            }
            else if(key<arr[mid])
                u = mid-1;
            else
                l = mid+1;
        }
        cout<<"Key not found"<<endl;
    }
    void coreMethod() {
        int n;
        getSize(n);
        int arr[n];
        getElements(arr, n);
        int key;
        getKey(key);
        binSearch(arr, 0, n-1, key);
    }
};
int main() {
    searchClass SC;
    SC.coreMethod();
    return 0;
}