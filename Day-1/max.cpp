#include<iostream>
using namespace std;

int maximum(int a , int b , int c){
    int max = a;
    if(b>max){
        max = b;
    }
    else if(c>max){
        max = c;
    }
    return max;
}

int main(){
    cout<<"Maximum = "<<maximum(10,13,11);
}