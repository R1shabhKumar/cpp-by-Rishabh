#include<iostream>
using namespace std;

float rishabh(float score, float factor=0.2){
    return score*factor;
} 

int main()
{
    float score;
    cout<<"Enter your score: "<<endl;
    cin>>score;
    if (score>500||score<0)
    {
        cout<<"Not valid"<<endl;
    }
    else
    {
    cout<<"Your percentage is: "<<rishabh(score)<<endl;
    } 
        return 0;
}