//Write a program to read the values of a,b and c and display the value of x, where
//x=a/b-c
//test your program for the following values
//a) a=250 ,b=85,c=25
//b) a=300 ,b=70,c=70

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    float x;
    a=250;
    b=85;
    c=25;
    x=(a/b)-c;
    cout<<x;
    return 0;
}
