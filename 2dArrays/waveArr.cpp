#include<iostream>
using namespace std;

int main(){
    int arr[][3]={10,20,30,
                        40,50,60,
                        70,80,90};

    int i=0;

    while(i<3){
        if(i%2==0){
        int j=0;
            while(j<3){
                cout<<arr[j][i]<<" ";
                j++;
            }
        }else{
            int j=2;
            while(j>=0){
                cout<<arr[j][i]<<" ";
                j--;
            }
        }
        i++;
    }

}