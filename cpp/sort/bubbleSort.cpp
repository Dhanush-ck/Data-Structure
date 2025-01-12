#include<iostream>
using namespace std;
class SortClass {
public:
    void getSize(int &size) {
        cout<<"Enter the number of elements in array : ";
        cin>>size;
    }

    void getElements(int array[], int &size){
        cout<<"Enter "<<size<<" elements"<<endl;
        for(int i=0; i<size; i++)
            cin>>array[i];
    }

    void bubbleSort(int arr[], int n) {
        for(int i = n-1; i>0; i--)
            for(int j = 0; j<i; j++)
                if(arr[j]>arr[j+1])
                    swap(arr[j], arr[j+1]);
    }

    void displayArray(int array[], int size) {
        cout<<"Sorted array"<<endl;
        for(int i=0; i<size; i++)
            cout<<array[i]<<" ";
    }

    void coreMethod() {
        int n;
        getSize(n);
        int arr[n];
        getElements(arr, n);
        bubbleSort(arr, n);
        displayArray(arr, n);
    }

};
int main() {
    SortClass SC;
    SC.coreMethod();
    return 0;
}