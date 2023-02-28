#include<iostream>
using namespace std;

//function prototyping
//type function_name(arguments);
//int sum(int a, int b);--->acceptable
//int sum(int a, int b);--->not acceptable
//int sum(int, int);--->acceptable
int sum(int a, int b){
int c=a+b;
return c;
}
int main(){
    int num1, num2;
    //num1 and num2 are actual parameters
    //a and b are formal parameters and will be taking values from actual parameters
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2);

return 0;
}