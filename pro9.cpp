//structure example
#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
};

int main(){
struct employee rishabh;
rishabh.id =1;
rishabh.favchar='c';
rishabh.salary=120000000;
cout<<"The id of Rishabh is "<<rishabh.id<<endl;
cout<<"The salary of Rishabh is "<<rishabh.salary<<endl;
cout<<"The favourite character of Rishabh is "<<rishabh.favchar<<endl;

return 0;
}