//Default arguments

#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor=1.04){ //factor is the default argument
    return currentMoney*factor;
}

int main(){
int money=100000;
cout<<"If you have: "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<"Rs after 1 year."<<endl;

cout<<"For VIP : If you have "<<money<<" Rs in your account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year."<<endl;
return 0;
}

//int strlen(const char *p)--->constant argument
//here p is marked constant using 'const' keyword meaning it cannot be changed in this program.
