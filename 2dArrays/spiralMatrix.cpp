#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={10,20,30,
                         40,50,60,
                         70,80,90};

    int rows=3;
    int cols=3;

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