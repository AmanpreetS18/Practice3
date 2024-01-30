/*Write a program to declare a class employee
 with id,name and salary.
 Alloacate memory to 'n' number of employees
 and get the details . Print those employees
 who are getting salary >50000*/
using namespace std;
#include<iostream>
class employee
{
    int id;
    string name;
     double salary;
    public:

    void get()
    {
        cout<<"details are";
        cin>>id;
        fflush(stdin);
        getline(cin,name);
        cin>>salary;

    }
    void show()
    { if(salary>50000)
        cout<<id<<endl<<name<<endl<<salary;
    }
};
int main()
{
    int i,n;
    cout<<"enter the number of employes";
        cin>>n;
        employee *e =new employee [n];
        for(i=0;i<=n-1;i++);
        e[i].get();
        for(i=0;i<=n-1;i++);
        e[i].show();

}
