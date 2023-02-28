#include<iostream>
#include<cmath>  // for the power formula
#include<iomanip> //for fixed and setprecision

using namespace std;

void power(int number, int pwr=2){
    cout<<"The square of "<<number<<" : "<<pow(number,2)<<endl;
    cout<<"The cube of "<<number<<" : "<<pow(number,3)<<endl;
}
void power1(int number,int intPower){
    cout<<"The "<<number<<" to the power of "<<intPower<<" : "<< fixed << setprecision(0) << pow(number,intPower)<<endl;
}
void power(double number, int pwr=2){
    cout<<"The square of "<<number<<" : "<<pow(number,2)<<endl;
    cout<<"The cube of "<<number<<" : "<<pow(number,3)<<endl;
}
void power1(double number, int intPower){
    cout<<"The "<<number<<" to the power of "<<intPower<<" : "<<pow(number,intPower)<<endl;
}

int main(){
    int intNum,intPower;
    double doubleNum;

    cout<<"Enter any integer value : ";
    cin>>intNum;

    cout<<"Enter any double value : ";
    cin>>doubleNum;

    cout<<"Enter the power value : ";
    cin>>intPower;

    power(intNum);
    power1(intNum,intPower);
    power(doubleNum);
    power1(doubleNum,intPower);

return 0;
}
