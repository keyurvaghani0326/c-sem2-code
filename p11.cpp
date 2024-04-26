#include<iostream>
using namespace std;
class employe
{
    int year=0;
    float months=0;
    float exp;
public:
    operator float()
    {
        return exp;
    }
    void getdata()
    {
    cout<<"enter employee experience in years and months"<<endl;
    cout<<"years :";
    cin>>year;
    cout<<"months :";
    cin>>months;
    months=months/12;
    exp=year+months;
    }

};
int main()
{
    employe e;
    e.getdata();
    float ex;
    ex=e;
    cout<<ex;

}
