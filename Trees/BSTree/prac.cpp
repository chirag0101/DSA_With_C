#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter Size:";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    

    int ele;
    cout<<"Enter ele:";
    cin>>ele;

    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];
            }
            size--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}