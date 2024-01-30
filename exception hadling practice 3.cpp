/*Write a program to make a user defined function check which takes 5 integers and calculate the sum of them. If sum is multiple of 5 then
 raise an exception that "Invalid numbers" otherwise print the sum.*/
 using namespace std;
 #include<iostream>
 int check(int a,int b,int c,int d,int e)
 {

int sum;
sum=a+b+c+d+e;
     if(sum%5==0)
        throw "invalid numbers";
        cout<<sum;

 }
 int main()
 {

     try{
     check(5,5,5,5,5);
     }
     catch(const char msg[])
     {
         cout<<msg;
     }
 }
