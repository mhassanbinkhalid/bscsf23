//13.1
#include<iostream>
using namespace std;
class A
{
private:
int a;
public:
void input()
{
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	}	
	void output()
	{
		cout<<"A : "<<a<<endl;
	}
};
int main()
{
	A obj1;
	obj1.input();
	obj1.output();
}
