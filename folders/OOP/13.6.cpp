//13.6
#include<iostream>
using namespace std;
class Array{
	private:
		int num[5];
		public:
			void fill();
			
			void display();
			void max();
			void min();
			
};

void Array::fill()
{
	cout<<"Enter the any five values"<<endl;
				int i;
				for(i=0;i<5;i++)
				{
					cin>>num[i];
				}
}
void Array::display()
{
	cout<<"The values are "<<endl;
				int i;
				for(i=0;i<5;i++)
				{
					cout<<num[i]<<endl;
				}
}
void Array::max()
{
	int max,i;
				max=num[0];
				for(i=0;i<5;i++)
				{
					if(num[i]>max)
					{
						max=num[i];
					}
				}
				cout<<"The Maximum Number is "<<max<<endl;
}
void Array::min()
{
	            int min,i;
				min=num[0];
				for(i=0;i<5;i++)
				{
					if(num[i]<min)
					{
						min=num[i];
					}
				}
				cout<<"The Minimum Number is "<<min<<endl;
}

int main()
{
	Array obj1;
	obj1.fill();
	obj1.display();
	obj1.max();
	obj1.min();
}
