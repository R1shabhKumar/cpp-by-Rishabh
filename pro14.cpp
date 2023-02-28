//Inline function
//use inline function only when the program is small otherwise it will overload the cache memory.
//don't use when static variable is involved

#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main(){
int a,b;
cout<<"Enter the value of a and b: "<<endl;
cin>>a>>b;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
cout<<"The product of a and b is: "<<product(a,b)<<endl;
return 0;
}