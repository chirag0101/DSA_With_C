#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size:";
    cin>>size;

    int arr[size];

    cout<<"Enter Elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        int min=arr[i];
        for(int j=i+1;j<size;j++){
            if(min>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

    return 0;
}