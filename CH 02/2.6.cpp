#include<iostream>

using namespace std;

class TEMP
{
    float F,C;
   public:
      float  getdata();
      void display(void);
};

 float  TEMP :: getdata()
{
cout<<"Enter the temperature in Fahrenheit: ";
cin>>F;
C = (F-32)*(0.56);
return(C);
}

void TEMP :: display(void)
{
float X;
 X=getdata();
cout<<"The Temperature in Celsius will be: "<<X;
}

int  main()
{
TEMP C;
C.display();
}
