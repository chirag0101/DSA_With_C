//undirected weighted graph adjacency matrix
#include<stdio.h>

void main(){
    int arr[4][4]={0,4,0,0,
                         4,0,5,0,
                         0,5,0,6,
                         0,0,6,1};

    char ch1='A';

    for(int i=0;i<4;i++){
        char ch2='A';
        for(int j=0;j<4;j++){
            if(arr[i][j]!=0){
                printf("%c -> %c \n",ch1,ch2);
            }
            ch2++;
        }
        ch1++;
    }

}