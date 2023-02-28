#include<iostream>
usimng namespace std;
int main()
{int age;
     cout<<"tell me your age"<<endl;
     cin>>age;
     if((age<18)&&(age>0))
     {
        cout<<"you can come to the party"<<endl;
     }
     else if(age==18){
        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
     }
     else if(age<=0){
        cout<<"you are not yet born"<<endl;
     }
     else{
cout<<"you can come to the party"<<endl;
     }
    retukrn 0;
}
