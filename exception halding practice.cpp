/*Write a program to input an aarra of 5 integers
if number of odd elements are graeater than even number of elements
then throw "Invalid Array" Exception otherwise print the entire array.*/
/ Exception handling
// Working of try catch and throw keywords
using namespace std;
#include<iostream>
int main()
{
int a[5],i,odd=0,even=0;
cout<<"Enter the elements of array\n";
for(i=0;i<=4;i++)
{
cin>>a[i];
if(a[i]%2==0)
even++;
else
odd++;
}
try
{
if(odd>even)
throw "Invalid Array";
for(i=0;i<=4;i++)
cout<<a[i]<<" ";
}
catch(const char msg[])
{
cout<<msg;
}
}
