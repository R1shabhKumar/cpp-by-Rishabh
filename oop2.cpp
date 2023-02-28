// using classes and nesting of member functions

#include<iostream>
#include<string>
using namespace std;


//OOPs - classes and objects

//c++ was initially called c with classes
//class---> extension of structures(in c)
//structures had limitations:
//                       --->members are public
//                       --->no methods
//classes---> structures + more
//classes---> can have methods and properties
//classes---> can make few members as private & few as public  
// structures in c++ are typedefed

/* you can declare objects along with the class declaration like this:
 class Employee{
     class definition
 } rishabh, amit, nitin;*/

 //rishabh.salary=8 makes no sense if salary is private

 //nesting of member function
 class binary{  //members of class are private by default
    string s;  //here s is a private function
    public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
 };

 void binary::read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
 }
 void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format!"<<endl;
            exit(0);
        }
    }
    
 }

void binary ::ones_compliment(void)
{
for (int i = 0; i < s.length(); i++)
{
    if (s.at(i)=='0')
    {
        s.at(i)='1';
    }
    else
    {
        s.at(i)='0';
    }
    
    }
}

void binary ::display(void)
{
   cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
   cout<<endl; 
}

 int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;

 }

