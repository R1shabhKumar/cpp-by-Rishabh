//Enum example
#include<iostream>
using namespace std;

int main(){
enum meal{ breakfast, lunch, dinner};
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;
meal m1=lunch;
meal m0=breakfast;
meal m2=dinner;
cout<<m1<<endl;
return 0;
}