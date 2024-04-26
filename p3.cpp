#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class company
{
    public :
    int number_of_cars;
    string modelname;
    string fueltype;
    float price;
    float mileage;
    string transmission;
    float tankcapacity;
    int seating;
    string airbags;
    int i;
public:
    void getdata()
    {
        fflush(stdin);
        cout<<"enter model name :";
        getline(cin,modelname);
        cout<<"enter fuel type between 1 petrol,2 diesel,3 cng,4 electirc :";
        cin>>i;
        if(i==1)
        {
            fueltype="petrol";
        }
        else if(i==2)
        {
            fueltype="diesel";
        }
        else if(i==3)
        {
            fueltype="cng";
        }
        else if(i==4)
        {
            fueltype="electric";
        }
        fflush(stdin);
        cout<<"enter prince of car ";
        cin>>price;
        fflush(stdin);
        cout<<"enter mileage of car :";
        cin>>mileage;
        fflush(stdin);
        cout<<"transmission of car can be manual or AMT :";
        cin>>transmission;
        fflush(stdin);
        cout<<"enter tank capacity of car in liters :";
        cin>>tankcapacity;
        fflush(stdin);
        cout<<"seating number of car :";
        cin>>seating;
        fflush(stdin);
        cout<<"airbag yes or no :";
        cin>>airbags;
        fflush(stdin);
    }
    void putdata()
    {
        cout<<left<<setw(8)<<modelname;
        cout<<left<<setw(11)<<fueltype;
        cout<<left<<setw(11)<<price;
        cout<<left<<setw(9)<<mileage;
        cout<<left<<setw(15)<<transmission;
        cout<<left<<setw(15)<<tankcapacity;
        cout<<left<<setw(10)<<seating;
        cout<<left<<setw(6)<<airbags<<endl;
    }

};
int main()
{
    int n;
    string cfuel;
    cout<<"enter numbers of cars";
    cin>>n;
    fflush(stdin);
    company cars[n];
    for(int i=0;i<n;i++)
    {
        cars[i].getdata();
    }
    cout<<" welcome to TATA motors "<<endl<<endl;
    cout<<" get the cat details as per your preferencce "<<endl<<endl;
    cout<<" enter 1 for model name 2 for fuel type and 3 for price range "<<endl<<endl;
    int k;
    cout<<" Enter your option :";
    cin>>k;
    switch(k)
    {
    case 1:
        cout<<"list of TATA cars "<<endl;
        for(int j=0;j<n;j++)
        {
             cout<<j+1<<cars[j].modelname;
             cout<<"\t";
             cout<<endl;
        }
        int i;
        cin>>i;
        for(int j=1;j<=n;j++)
        {
            if(i=j)
            {
        cout<<left<<setw(8)<<"Model"<<left<<setw(11)<<"fuel"<<left<<setw(11)<<"Price"<<left<<setw(9)<<"Milege"<<left<<setw(15)<<"Transmistion"<<left<<setw(15)<<"Tankcapacity";
        cout<<left<<setw(10)<<"Seating"<<left<<setw(6)<<"Airbag"<<endl;
        cout<<left<<setw(19)<<""<<left<<setw(11)<<"(lakhs)"<<left<<setw(9)<<"(km/l)"<<left<<setw(15)<<""<<left<<setw(15)<<"(liters)"<<left<<setw(10)<<"capacity"<<endl;
                cars[j-1].putdata();
                break;
            }
        }
        break;
    case 2:
        cout<<"tata motors are available with fuel options "<<endl;
        cout<<"(1)petrol (2)diesel (3)CNG (4)electric";
        int l;
        cin>>l;
         if(l==1)
        {
            cfuel="petrol";
        }
        else if(l==2)
        {
            cfuel="diesel";
        }
        else if(l==3)
        {
            cfuel="cng";
        }
        else if(l==4)
        {
            cfuel="electric";
        }

        for(i=0;i<n;i++)
        {
           if(cars[i].fueltype==cfuel)
           {
        cout<<left<<setw(8)<<"Model"<<left<<setw(11)<<"fuel"<<left<<setw(11)<<"Price"<<left<<setw(9)<<"Milege"<<left<<setw(15)<<"Transmistion"<<left<<setw(15)<<"Tankcapacity";
        cout<<left<<setw(10)<<"Seating"<<left<<setw(6)<<"Airbag"<<endl;
        cout<<left<<setw(19)<<""<<left<<setw(11)<<"(lakhs)"<<left<<setw(9)<<"(km/l)"<<left<<setw(15)<<""<<left<<setw(15)<<"(liters)"<<left<<setw(10)<<"capacity"<<endl;
               cars[i].putdata();
           }
        }
        break;
    case 3:
        cout<<"enter your max affordable range in lakhs :";
        int cprice;
        cin>>cprice;
        for(int j=0;j<n;j++)
        {
            if(cprice>=cars[j].price)
            {
        cout<<left<<setw(8)<<"Model"<<left<<setw(11)<<"fuel"<<left<<setw(11)<<"Price"<<left<<setw(9)<<"Milege"<<left<<setw(15)<<"Transmistion"<<left<<setw(15)<<"Tankcapacity";
        cout<<left<<setw(10)<<"Seating"<<left<<setw(6)<<"Airbag"<<endl;
        cout<<left<<setw(19)<<""<<left<<setw(11)<<"(lakhs)"<<left<<setw(9)<<"(km/l)"<<left<<setw(15)<<""<<left<<setw(15)<<"(liters)"<<left<<setw(10)<<"capacity"<<endl;
                cars[j].putdata();
            }
        }
        break;
    }
}
