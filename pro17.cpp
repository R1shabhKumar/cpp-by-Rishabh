// using recursions

#include<iostream>
using namespace std;

int factorial(int n){
    //base case---> to stop recursion
    if (n<=1)
    {
    return 1;
    }
    //recursive case---> to continue recursion
     return n * factorial(n-1);
}

int main(){
//factorial of a number
//6!= 6*5*4*3*2*1=720
// 0!=1 by definition
// 1!= 1 by definition
//n!=  n * (n-1)!

int num;
cout<<"Enter a non-negative integer: ";
cin>>num;
cout<<"The factorial of "<<num<<" is "<<factorial(num)<<endl;
return 0;
}