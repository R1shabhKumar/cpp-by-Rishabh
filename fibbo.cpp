// Fibbonacci sequence

#include<iostream>
using namespace std;

int fib(int n){
    // base case
    if (n<2)
    {
        return 1;
    }
    // recursive case
    else{
    return fib(n-1) + fib(n-2);
    }
}

int main(){
    int a;
    cout<<"Enter the term: ";
    cin>>a;
    cout<<"The "<<a<<"th term of the Fibbonacci sequence is: "<<fib(a); 

return 0;
}