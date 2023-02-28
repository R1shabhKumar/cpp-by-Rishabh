// using function overloading

#include<iostream>
using namespace std;

//we have two different functions with same name
int add(int a, int b){ //--->this function will be executed when called with an argument with two integers
   cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}
int add(int a, int b, int c){ //--->this function will be executed when called with an argument with three integers
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}

// calculate the volume of cylinder
float volume(double r, double h){
    return (3.14*r*r*h);
}

//calculate the volume of cube
float volume(float a){
    return (a*a*a);
}

//calculate the volume of cuboid
float volume(float l, float b, float h){
    return (l*b*h);
}

int main(){
    float r,h,a,l,b,d;
cout<<"The sum of 3 and 6 is: "<<add(3,6)<<endl; //function add(int a, int b) is executed here
cout<<"The sum of 2, 4 and 6 is: "<<add(2,4,6)<<endl; //function add(int a, int b, int c) is executed here

cout<<"Enter the radius and height of the cylinder:"<<endl;
cin>>r>>h;
cout<<"Enter the side of the cube: ";
cin>>a;
cout<<"Enter the length, breadth and height of the cuboid:"<<endl;
cin>>l>>b>>d;
cout<<"Volume of the cylinder: "<<volume(r,h)<<endl;
cout<<"Volume of the cube: "<<volume(a)<<endl;
cout<<"Volume of the cuboid: "<<volume(l,b,d)<<endl;
return 0;
}