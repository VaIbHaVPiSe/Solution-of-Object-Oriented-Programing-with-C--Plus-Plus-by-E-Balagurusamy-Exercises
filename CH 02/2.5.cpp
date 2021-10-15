//Write a C++ program  that will ask for a  temperature in Fahrenheit and display it in Celsius.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{


float F , C;
cout<<"Enter the temperature in Fahrenheit: " ;
cin>>F;
 C =(F - 32)*(0.5556);
 cout<<"The Temperature in Celsius will be: "<<C;
 return 0;
}
