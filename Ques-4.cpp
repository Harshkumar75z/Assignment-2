// 4) WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter Radius : ";
    cin>>r;
    int h;
    cout<<"Enter Height : ";
    cin>>h;
    float volume=3.1415*r*r*h;
    cout<<volume;
}

// OUTPUT:-
// Enter Radius : 4
// Enter Height : 5
// 251.32