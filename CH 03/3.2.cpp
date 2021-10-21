/* Write a Program to print following pattern using for loop.
1
22
333
4444
55555
........ */

#include<iostream>

using namespace std;

int main()
{

int i,j,x;

cout<<"Enter the value of n: ";

cin>>x;
for(i=1;i<=x;i++)
{
for(j=1;j<=i;j++)
{
cout<<i;
}
cout<<"\n";
}
}
