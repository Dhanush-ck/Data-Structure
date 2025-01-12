#include<iostream>
using namespace std;
class polynomial 
{
    typedef struct poly {
        int expo, coeff;
    }Poly;
public :
    int n;
    void getSize(int &n) {
        cout<<endl<<"Enter the number of elements : ";
        cin>>n;
    }
    void getData(Poly arr[], int size){
        for(int i=0; i<size; i++){
            cout<<endl;
            cout<<"Enter the coefficient : ";
            cin>>arr[i].coeff;
            cout<<"Enter the exponent : ";
            cin>>arr[i].expo;
        }
    }
    void findSum(Poly A[], int x, Poly B[], int y, Poly C[], int &z) {
        int i=0, j=0, k=0;
        while((i<x) && (j<y)){
            if(A[i].expo == B[j].expo) {
                C[k].coeff = A[i].coeff + B[j].coeff;
                C[k].expo = A[i].expo;
                i++, j++, k++;
            }
            else if(A[i].expo>B[j].expo){
                C[k].coeff = A[i].coeff;
                C[k].expo = A[i].expo;
                i++, k++;
            }
            else{
                C[k].coeff = B[j].coeff;
                C[k].expo = B[j].expo;
                j++, k++;
            }
        }
        while(i<x){
            C[k].coeff = A[i].coeff;
            C[k].expo = A[i].expo;
            i++, k++;
        }
        while(j<y){
            C[k].coeff = B[j].coeff;
            C[k].expo = B[j].expo;
            j++, k++;
        }
        z = k;
    }
    void display(Poly rs[], int t) {
        for(int i=0; i<t; i++) {
            if(i != 0)
                cout<<" + ";
            cout<<rs[i].coeff<<"x^"<<rs[i].expo;
        }
    }
    void calc(){
        int a, b, c;
        getSize(a);
        Poly poly1[a];
        getData(poly1, a);
        getSize(b);
        Poly poly2[b];
        getData(poly2, b);
        c = a + b;
        Poly poly3[c];
        findSum(poly1, a, poly2, b, poly3, c);
        display(poly3, c);
    }
};
int main()
{
    polynomial P;
    P.calc();
    return 0;
}