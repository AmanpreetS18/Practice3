// Dynamic memory allocation
// Dynamic memory allocation to object of a class
// Dynamic object
// class_name * var = new class_name[size];
#include <iostream>
using namespace std;
class student
{
	int roll_no;
	string name;
	public:
		void get()
		{
			cout<<"Enter the detail of student\n";
			cin>>roll_no;
			fflush(stdin);
			getline(cin,name);
		}
		void show()
		{
			cout<<endl<<roll_no<<" "<<name;
		}
};
int main()
{
	int i,n;
	cout<<"Enter the number of students\n";
	cin>>n;
	student *s = new student[n];
	// s[0],s[1]..s[n-1]
	for(i=0;i<=n-1;i++)
	s[i].get();
	for(i=0;i<=n-1;i++)
	s[i].show();
}
