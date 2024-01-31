#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,
                         5,6,7,8,
                         9,10,11,12};

    int rows=4;
    int cols=4;

    int startRows=0;
    int endRows=rows-1;

    int startCols=0;
    int endCols=rows-1;

    int tracker;

    while(startRows<=endRows){
        
        tracker=startCols;
        while(tracker<endCols){
            cout<<arr[startRows][tracker++]<<" ";
        }
        startRows++;

        tracker=startCols;
        while(tracker<endRows){
            cout<<arr[tracker++][endCols]<<" ";
        }
        endCols--;

        tracker=endRows;
        while(tracker>=startCols){
            cout<<arr[endRows][tracker--]<<" ";
        }
        endRows--;

        tracker=endRows;
        while(tracker>=startRows){
            cout<<arr[tracker--][startCols]<<" ";
        }
        startRows++;
        endRows--;
    }

}