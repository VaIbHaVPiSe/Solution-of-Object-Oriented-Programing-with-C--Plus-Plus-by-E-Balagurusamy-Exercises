//Write a program to read two numbers from keyboard and display the larger value on screen
#include<iostream>
using namespace std;
int main()
{
int a ,b;
  cout<<"Enter the 1st number: ";
  cin>>a;
  cout<<"Enter the 2nd number: ";
  cin>>b;
  if(a>b)
  cout<<"the larger value is: "<<a;
  else
  cout<<"the larger value is: "<<b;
  return 0;
}
