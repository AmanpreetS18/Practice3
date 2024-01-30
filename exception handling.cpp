// Exception handling
// Working of try catch and throw keywords
using namespace std;
#include<iostream>
int main()
{
int a,b,c;
cout<<"Enter the value of a and b\n";
cin>>a>>b;
try
{
if(b==0)
throw 1;
c= a/b;
cout<<"Division is "<<c;
}
catch(int x)
{
cout<<"Divide by zero exception occurs";
}
cout<<"Hello World";

}
