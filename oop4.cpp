// using static data members and static data functions 

#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; //count=1000 cannot be initialised here
    public:
    void setData(){
        cout<<"Enter the id: ";
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of the employee is "<<id<<" and this is employee number is "<<count<<endl;
    }

    static void getCount(){ //---> static member function
        cout<<"The value of count is "<<count<<endl;
        //cout<<id; --->throws an error
    }
};
// count is the static data member of class employee
int Employee::count; //Default value of count is 0 // count=1000 can be initialised here 

int main(){
    Employee rishabh,amit,nitin;
    //rishabh.id=1;
    //rishabh.count=1;  --->cannot access this because id and count are private
rishabh.setData();
rishabh.getData();
Employee::getCount();

amit.setData();
amit.getData();
Employee::getCount();

nitin.setData();
nitin.getData();
Employee::getCount();

return 0;
}