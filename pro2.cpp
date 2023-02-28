#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter you age:"<<endl;
    cin>>age;
    switch (age)
    {
        case 18:
        cout<<"you are 18 "<<endl;
        break;
        case 22:
        cout<<"you are 22"<<endl;
        break;
        case 10:
        cout<<"you also 10"<<endl;
    
    default:
    cout<<"there is no special case"<<endl;
        break;
    }
    return 0;
}
