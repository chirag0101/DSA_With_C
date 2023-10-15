//undirected graph adjacency matrix
#include<stdio.h>

void main(){
    int arr[4][4]={0,1,0,0,
                         1,0,1,0,
                         0,1,0,1,
                         0,0,1,0};

    char ch1='A';

    for(int i=0;i<4;i++){
        char ch2='A';
        for(int j=0;j<4;j++){
            if(arr[i][j]==1){
                printf("%c -> %c \n",ch1,ch2);
            }
            ch2++;
        }
        ch1++;
    }

}