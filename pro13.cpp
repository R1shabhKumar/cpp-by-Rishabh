#include<iostream>
using namespace std;

// int sum(int a, int b){
    // int c=a+b;
    // return c;
// }

//This will not swap a and b
void swap(int a, int b){ //temp  a  b
    int temp=a;a=b;      //4     4  5
    b=temp;              //4     5  4
}

//call by reference using pointers
void swapPointer(int* a, int* b){  //temp  a  b
    int temp= *a;                  //4     4  5
    *a=*b;                         //4     5  5
    *b= temp;                      //4     5  4
}
//call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp =a;
    a=b;
    b= temp;
}
// int main(){
// cout<<"the sum of 4 and 5 is "<<sum(4,5);
// return 0;
// }

int main(){
    int a=4,b=5;
    cout<<"The  value of a is "<<a<<" and the value of b is "<<b<<endl;
    //swap(a,b);
    //cout<<"The swapped value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swapPointer(&a,&b);//This will swap a and b using pointer reference
    // cout<<"The swapped value of a is "<<a<<" and the value of b is "<<b<<endl;

 swapReferenceVar(a,b);
 cout<<"The swapped value of a is "<<a<<" and the value of b is "<<b<<endl; 
    return 0;
}