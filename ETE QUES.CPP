#include <iostream>

using namespace std;
int main()
{
int i=2,n,sum=0;
int *p=new int[i];
p[0]=10;
p[1]=20;
for(n=0;n<i;n++)
{
    sum=p[1]+sum;

}
cout<<sum;

    delete[] p;
}
