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

    void selectionSort(int arr[], int &n) {
        int k = 0;
        while(k<n-1) {
            int m = findMin(arr, n, k);
            swap(arr[m], arr[k]);
            k++;
        }
    }

    int findMin(int array[], int size, int k) {
        int m = k;
        for(int i = k; i<size; i++) 
            if(array[i]<array[m])
                m = i;
        return m;
    }

    void swap(int &a, int &b) {
        int t = a;
        a = b;
        b = t;
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
        selectionSort(arr, n);
        displayArray(arr, n);
    }

};
int main() {
    SortClass SC;
    SC.coreMethod();
    return 0;
}