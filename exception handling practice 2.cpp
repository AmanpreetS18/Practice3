/*Write a program to input a string. If NUmber of vowels in string is even then raise an exception that "Invalid string"
otherwise print the string.*/
using namespace std;
#include<iostream>
int main()
{
string s;
int i,v=0;
cout<<"Enter a string\n";
getline(cin,s);
for(i=0;i<=s.length();i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
v++;
}
try
{
if(v%2==0)
throw "Invalid String";
cout<<"String is "<<s;
}
catch(const char msg[])
{
cout<<msg;
}
}
