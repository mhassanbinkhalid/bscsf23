//13.12
#include<iostream>
using namespace std;
class Book{
	private:
		int pages;
		double price;
		char title[100];
		public:
			void input()
			{
				cout<<"Enter the title of the book"<<endl;
				cin.ignore();
				cin.getline(title,100);
				cout<<"Enter the pages of the book"<<endl;
				cin>>pages;
				cout<<"Enter the price of the book"<<endl;
				cin>>price;
			}
			void output()
			{
				cout<<"TITLE : "<<title<<endl;
				cout<<"PAGES : "<<pages<<endl;
				cout<<"PRICE : "<<price<<endl;
			}
			
};
int main()
{
	Book obj1,obj2,obj3;
	cout<<"-------------------ENTER DETAILS FOR FIRST BOOK------------------------"<<endl;
	obj1.input();
	cout<<"-------------------ENTER DETAILS FOR SECOND BOOK------------------------"<<endl;
	obj2.input();
	cout<<"-------------------ENTER DETAILS FOR THIRD  BOOK------------------------"<<endl;
	obj3.input();
	cout<<"-------------------FIRST BOOK------------------------"<<endl;
	obj1.output();
		cout<<"-------------------SECOND BOOK------------------------"<<endl;
		obj2.output();
			cout<<"-------------------THIRD BOOK------------------------"<<endl;
		obj3.output();
}
