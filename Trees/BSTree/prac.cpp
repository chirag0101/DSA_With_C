#include<iostream>
using namespace std;

void func(int a,int b=3,int c=3){
    cout<<++a * ++b * --c;
}

int main(){
    func(5,0,0);
    return 0;
}