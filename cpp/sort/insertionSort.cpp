#include<iostream>
using namespace std;
class sortClass {
public:
    void getSize(int &size) {
        cout<<"Enter the number of elements in array : ";
        cin>>size;
    }

    void getElements(int array[], int &size){
        cout<<"Enter "<<size<<" elements "<<endl;
        for(int i=0; i<size; i++) {
            cin>>array[i];
        }
    }

    void insertionSort(int arr[], int size){
        int i=1;
        while(i<size) {
            int item = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>item){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = item; 
            i++;
        }
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
        insertionSort(arr, n);
        displayArray(arr, n);
    }

};
int main() {
    sortClass SC;
    SC.coreMethod();
    return 0;
}