#include<iostream>
#include<string>
using namespace std;

struct employee
{
    int id;
    string name;
    string  qualification;
    float exp;
    long int number;

    void getdata()
    {
        cout<<"enter id of employee :";
        cin>>id;
        fflush(stdin);
        cout<<"enter name of employee :";
        cin>>name;
        fflush(stdin);
        cout<<"enter qualification of employee :";
        cin>>qualification;
        fflush(stdin);
        cout<<"enter exp of empployee  :";
        cin>>exp;
        fflush(stdin);
        cout<<"enter contact number of emoplyee :";
        cin>>number;
        fflush(stdin);

    }
    void display()
    {
        cout<<"id of employee :"<<id<<endl;
        cout<<"employee name :"<<name<<endl;
        cout<<"Qualification:"<<qualification<<endl;
        cout<<"exp  :"<<exp<<endl;
        cout<<"contact number :"<<number<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of employee";
    cin>>n;
    fflush(stdin);
    employee e[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter details of employee"<<i+1<<endl;
        e[i].getdata();
    }

    char a;
         l:cout<<"enter id of employee";
            int id;
        cin>>id;
        fflush(stdin);
    for(int i=0;i<100;i++)
    {

        if(e[i].id==id)
        {
            cout<<"details of employee"<<i+1<<endl;

        e[i].display();
        }
        else
        {
          cout<<"error";
        }
        cout<<"y for next and enter n for exit";
        cin>>a;
         fflush(stdin);
        if(a=='y' || a=='Y')
        {
            i++;
            goto l;

        }
        else
        {
            break;
        }

    }
}
