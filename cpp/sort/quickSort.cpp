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

    void quickSort(int arr[], int l, int u) {
        if(l<u) {
            int j = partition(arr, l, u);
            quickSort(arr, l, j-1);
            quickSort(arr, j+1, u);
        }
    }

    int partition(int arr[], int l, int u) {
        int pivot = arr[l];
        int i = l;
        int j = u;

        while (i < j) {
            while (arr[i] <= pivot && i < u) {
                i++;
            }
            while (arr[j] > pivot) {
                j--;
            }
            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        arr[l] = arr[j];
        arr[j] = pivot;
        return j;
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
        quickSort(arr, 0, n-1);
        displayArray(arr, n);
    }

};
int main() {
    SortClass SC;
    SC.coreMethod();
    return 0;
}