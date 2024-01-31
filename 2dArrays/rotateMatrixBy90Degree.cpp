#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={5,1,9,11,
                          2,4,8,10,
                          13,3,6,7,
                          15,14,12,16};

    int rows=4;
    int cols=4;

    for(int i=0;i<rows/2;i++){
        for(int j=i;j<cols;j++){
            if(i!=j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

    int start=0;
    int end=cols-1;

    // while(start<end){
    //     for(int i=0;i<rows;i++){
    //         swap(arr[i][start],arr[i][end]);
    //     }
    //     start++;
    //     end--;
    // }
    

    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}