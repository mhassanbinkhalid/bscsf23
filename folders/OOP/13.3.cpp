//13.3
#include<iostream>
using namespace std;
class circle{
	private:
		float radius;
		public:
			void get_radius(int value)
			{
				radius=value;
				cout<<"RADIUS : "<<radius<<endl;
				
			}
			void area()
			{
				float a;
				a=3.14*radius*radius;
				cout<<"AREA : "<<a<<endl;
			}
			void circumference()
			{
				float c;
				c=2*3.14*radius;
				cout<<"CIRCUMFERENCE : "<<c<<endl;
			}
};
int main()
{
	circle obj1;
	obj1.get_radius(5);
	obj1.area();
	obj1.circumference();
}


