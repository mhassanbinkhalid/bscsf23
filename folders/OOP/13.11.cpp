//13.11
#include<iostream>
#include<string.h>
using namespace std;
class A{
	private:
		int num;
		char ch[20];
		public:
			A()
			{
				num=0;
				ch[0]='x';
			}
			A(int n,char c[])
			{
				num=n;
				strcpy(ch,c);
			}
			void show()
			{
				cout<<"NUM : "<<num<<endl;
				cout<<"CH : "<<ch<<endl;
				
			}
};
int main()
{
	A obj1(200,"HELLO");
	obj1.show();
}
