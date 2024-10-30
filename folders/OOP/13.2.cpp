//13.2
#include<iostream>
using namespace std;
class Marks{
	private:
	int physics;
	int math;
	int english;
	
	public:
		void input()
		{
			cout<<"Enter the marks of physics"<<endl;
			cin>>physics;
			cout<<"Enter the marks of math"<<endl;
			cin>>math;
			cout<<"Enter the marks of english"<<endl;
			cin>>english;
			
		}
		int sum()
		{
			int sum;
			sum=physics+math+english;
			return sum;
		}
		int avg()
		{
			int sum,avg;
			sum=physics+math+english;
			avg=sum/3;
			return avg;
		}
};
int main()
{
	Marks obj1;
	int sum,avg;
	obj1.input();
	sum=obj1.sum();
	avg=obj1.avg();
	cout<<"THE SUM IS : "<<sum<<endl;
	cout<<"THE AVG IS : "<<avg<<endl;
}
