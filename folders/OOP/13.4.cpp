//13.4
#include<iostream>
using namespace std;
class Book{
	private:
		int BookID;
		int pages;
		float price;
		public:
			void get()
			{
				cout<<"Enter the ID of the Book"<<endl;
				cin>>BookID;
				cout<<"Enter the pages of the book"<<endl;
				cin>>pages;
				cout<<"Enter the price of the book"<<endl;
				cin>>price;
			}
			void show()
			{
				cout<<"Book ID : "<<BookID<<endl;
				cout<<"Pages : "<<pages<<endl;
				cout<<"Price : "<<price<<endl;
			}
			void set(int bi,int pa,float pr)
			{
				pages=pa;
				price=pr;
				BookID=bi;
			}
			float getPrice(Book person1)
			{
				int totalprice;
				totalprice=price+person1.price;
				return totalprice;
			}
};
int main()
{
	Book person1,person2;
	float tp;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Enter the values for first person's book : "<<endl;
	person1.get();
	cout<<"THE BOOK OF FIRST PERSON IS : "<<endl;
	person1.show();
	person2.set(2,1700,1050);
	cout<<"-----------------------------------------"<<endl;
	cout<<"THE BOOK OF SECOND PERSON IS : "<<endl;
	person2.show();
	tp=person2.getPrice(person1);
	cout<<"-----------------------------------------"<<endl;
	cout<<"THE TOTAL PRICE OF BOOKS ARE : "<<endl;
	cout<<tp<<endl;
	
}
