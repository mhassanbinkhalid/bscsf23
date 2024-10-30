//13.10
#include<iostream>
#include<string.h>
using namespace std;
class TV{
	private:
		char Brand_Name[50];
		int Model;
		int Retailed_Price;
		public:
			void display()
			{
				cout<<"BRAND NAME : "<<Brand_Name<<endl;
				cout<<"MODEL : "<<Model<<endl;
				cout<<"RETAILED PRICE : "<<Retailed_Price<<endl;
			}
			TV()
			{
				strcpy(Brand_Name,"SAMSUNG");
				Model=2002;
				Retailed_Price=12000;
			}
			void change(int pr,int m,char name[])
			{
				strcpy(Brand_Name,name);
				Model=m;
				Retailed_Price=pr;
			}
};
int main()
{
	TV obj1;
	cout<<"-------------------------BEFORE CHANGE----------------------------"<<endl;
	obj1.display();
	cout<<"--------------------------AFTER CHANGE----------------------------"<<endl;
	obj1.change(3000,1992,"VIVO");
	obj1.display();
}
