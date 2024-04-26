


#include<iostream>
#include<iomanip>

using namespace std;

class product
{

protected:

	int product_id;
	string product_name,product_manufacturer;
	float product_price;

public:

	product(int ProductId,string ProductName,string ProductManufacturer,float ProductPrice)
	{
		product_id=ProductId;
		product_name=ProductName;
		product_manufacturer=ProductManufacturer;
		product_price=ProductPrice;
	}

	virtual void putdata() = 0;
};

class smartwatch : public product
{
protected:

	float dial_size;

public:

	smartwatch(int ProductId,string ProductName,string ProductManufacturer,float ProductPrice,float DialSize):product( ProductId, ProductName, ProductManufacturer, ProductPrice)
	{
		dial_size = DialSize;
	}

	void putdata()
	{
	 cout<<left<<product_id<<" : "<<product_name<<" : "<<product_manufacturer<<" : "<<product_price<<" : "<<dial_size ;
	 cout<<endl<<"------------------------------------------------------------------------------------------";
	}
};

class bedsheet : public product
{
protected:

	float width,height;

public:

	bedsheet(int ProductId,string ProductName,string ProductManufacturer,float ProductPrice,float Width,float Height):product( ProductId, ProductName, ProductManufacturer, ProductPrice)
	{
	width = Width;
	height = Height;
	}

	void putdata()
	{
	 cout<<left<<product_id<<" : "<<product_name<<" : "<<product_manufacturer<<" : "<<product_price<<" : "<<width<<" : "<<height ;
	 cout<<endl<<"--------------------------------------------------------------------------------------------";
	}
};

int main()
{
	int id;
	float price,dial,h,w;
	string name,manufacturer;
	int c;

	cout<<"Enter 1 : smartwatch menu"<<endl;
	cout<<"Enter 2 : bedsheet menu"<<endl;
	cout<<"Enter your choice : ";
	cin>>c;
	switch(c)
	{
	case 1:
		{
			cout<<endl<<"** ENTER SMARTWATCH DATA **"<<endl<<endl;
			cout<<"Enter product id : ";
			cin>>id;
			fflush(stdin);
			cout<<"Enter product name : ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter product manufacturer : ";
			getline(cin,manufacturer);
			fflush(stdin);
			cout<<"Enter product price : ";
			cin>>price;
			cout<<"Enter product dial size : ";
			cin>>dial;
			cout<<endl<<"------------------------------------------------------------------------------------------"<<endl;


			product *s;
			s = new smartwatch(id,name,manufacturer,price,dial);
			s->putdata();
			break;
		}

	case 2:
		{
			cout<<endl<<"** ENTER BEDSHEET DATA **"<<endl<<endl;
			cout<<"Enter product id : ";
			cin>>id;
			fflush(stdin);
			cout<<"Enter product name : ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter product manufacturer : ";
			getline(cin,manufacturer);
			fflush(stdin);
			cout<<"Enter product price : ";
			cin>>price;
			cout<<"Enter bedsheet width : ";
			cin>>w;
			cout<<"Enter bedsheet height : ";
			cin>>h;
			 cout<<endl<<"-------------------------------------------------------------------------------------------"<<endl;

			product *b;
			b = new bedsheet(id,name,manufacturer,price,w,h);
			b->putdata();
			break;
		}


	}



}
