#include<iostream>
using namespace std;
class exp
{
    int year;
    int month;
public:
    exp()
    {
        year=0;
        month=0;
    }
    exp(float  a)
    {
       year=a;
       month=(a-year)*12;
    }
   void putdata()
   {
       cout<<"employe experiend is "<<year<<" year and "<<month<<" months ";

   }
};

int main()
{
    float  n;
    cout<<"enter employe experience :";
    cin>>n;
    exp e;
    e=n;
    e.putdata();

}
