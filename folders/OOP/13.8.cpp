//13.8
#include<iostream>
using namespace std;
class A{
	private:
		int num1,num2;
		public:
			A()
			{
				num1=100;
				num2=100;
			}
			void avg()
			{
				int average;
				cout<<"1st Number is "<<num1<<endl;
				cout<<"2nd Number is "<<num2<<endl;
				average=num1+num2;
				average=average/2;
				cout<<"THE AVERAGE OF TWO NUMBERS ARE "<<average<<endl;
			}
};
int main()
{
	A obj1;
	obj1.avg();
}
