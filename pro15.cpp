//Static variables

#include<iostream>
using namespace std;

int answer(int a, int b){
    static int c=0;//This executes only once
    c=c+1;//it will retain its previous value
    return a*b+c;
}

int main(){
int a,b;
cout<<"Enter the values of a and b: "<<endl;
cin>>a>>b;
cout<<"The final answer is: "<<answer(a,b)<<endl;
cout<<"The final answer is: "<<answer(a,b)<<endl;
cout<<"The final answer is: "<<answer(a,b)<<endl;
cout<<"The final answer is: "<<answer(a,b)<<endl;
cout<<"The final answer is: "<<answer(a,b)<<endl;
return 0;
}