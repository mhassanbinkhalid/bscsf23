//13.5
#include<iostream>
using namespace std;
class Result{
	private:
		int rollno;
		char name[50];
		int marks[3];
		public:
			void input()
			{
				cout<<"Enter the name of the student"<<endl;
				cin.getline(name,50);
				cout<<"Enter the roll number of the student"<<endl;
				cin>>rollno;
				cout<<"Enter the marks of three subjects"<<endl;
				int i;
				for(i=0;i<3;i++)
				{
					cin>>marks[i];
				}
			}
			void output()
			{
				cout<<"NAME : "<<name<<endl;
				cout<<"ROLL NO : "<<rollno<<endl;
				cout<<"MARKS : "<<endl;
				int i;
				for(i=0;i<3;i++)
				{
					cout<<marks[i]<<endl;
				}
			}
			void total()
			{
				int total=0,i;
				for(i=0;i<3;i++)
				{
					total=marks[i]+total;
				}
				cout<<"THE TOTAL MARKS ARE : "<<total<<endl;
			}
			void avg()
			{
				int total=0,i;
				for(i=0;i<3;i++)
				{
					total=marks[i]+total;
				}
				cout<<"THE AVERAGE MARKS ARE : "<<total/3<<endl;
			}
};
int main()
{
	Result obj1;
	obj1.input();
	obj1.output();
	obj1.total();
	obj1.avg();
}
