#include<iostream>
using namespace std;

void swap(int &a , int &b){
    int x = a;
    a = b;
    b = x;
}

int main(){
    int n1 = 10;
    int n2 = 20;
    swap(n1,n2);
    cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2;
}
