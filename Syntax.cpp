/*  Array Declaration in c++*/


#include<iostream>

using namespace std;

int main(){
    int n,i,a[10];
    cout<<"Enter the no of elements you required in the array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    
    for(i=0;i<n;i++){
        cin>>a[i];
        cout<<"/n";
    }

    cout<<"The array elements are : ";
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}


