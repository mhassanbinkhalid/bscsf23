//13.9
#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int marks;
		char grade[30];
		public:
			student(int m,char g[])
			{
				marks=m;
				strcpy(grade,g);
			}
			void show()
			{
				cout<<"MARKS : "<<marks<<endl;
				cout<<"GRADE : "<<grade<<endl;
			}
};
int main()
{
	student obj1(340,"B"),obj2(560,"A");
	cout<<"THE RECORD OF THE FIRST STUDENT IS "<<endl;
	obj1.show();
	cout<<"THE RECORD OF SECOND STUDENT IS "<<endl;
	obj2.show();
	
}
