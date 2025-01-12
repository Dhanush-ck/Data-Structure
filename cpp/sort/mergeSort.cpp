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

    void mergeSort(int array[], int l, int u) {
        if(l<u) {
            int mid = (l+u)/2;
            mergeSort(array, l, mid);
            mergeSort(array, mid+1, u);
            merge(array, l, mid, mid+1, u);
        }
    }

    void merge(int arr[], int i1, int i2, int j1, int j2) {
        int temp[j2 - i1 + 1];
        int i = i1, j = j1, k = 0;
        while(i<=i2 && j<=j2) {
            if(arr[i]<arr[j])
                temp[k++] = arr[i++];
            else    
                temp[k++] = arr[j++];
        }
        while(i<=i2)
            temp[k++] = arr[i++];
        while(j<=j2)
            temp[k++] = arr[j++];
        i=i1;
        j= 0;
        while(i<=j2)
            arr[i++] = temp[j++];
    }

    void displayArray(int array[], int size) {
        cout<<"Sorted array"<<endl;
        for(int i=0; i<size; i++)
            cout<<array[i]<<" ";
        cout<<endl;
    }

    void coreMethod() {
        int n;
        getSize(n);
        int arr[n];
        getElements(arr, n);
        mergeSort(arr, 0, n-1);
        displayArray(arr, n);
    }

};
int main() {
    SortClass SC;
    SC.coreMethod();
    return 0 ;
}