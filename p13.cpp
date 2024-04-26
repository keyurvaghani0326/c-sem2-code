#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
    int id;
    string name;
    string qua;
    float exp;
    int contact;
    static int ave_exp,tot_no;
protected :
    void getdata()
    {
        cout << "Enter Employee id :";
        cin >> id;

        tot_no++;
        fflush(stdin);
        cout << "Enter Employee Name :";
        getline(cin,name);
        fflush(stdin);
        cout << "Enter Qualification :";
        getline(cin,qua);
        fflush(stdin);
        cout << "Enter Experience :";
        cin >> exp;
        ave_exp+=exp;
        cout << "Enter Contact :";
        cin >> contact;
        fflush(stdin);
    }
    void putdata()
    {

                cout << "---------------------------------"<<endl;
                cout.width(20);cout <<left<< "Employee Name " << ":"<<name << endl;
                cout.width(20);cout <<left<< "Qualification " << ":"<<qua << endl;
                cout.width(20);cout <<left<< "Experience " << ":"<<exp<< endl;
                cout.width(20);cout <<left<< "Contact Number " <<":"<< contact << endl;
    }

    int  searchid(int eid)
    {
        if(id==eid)
            return 1;
        else
            return 0;
    }
    public:
     static void expe()
    {
        cout<<"average exp="<<ave_exp/tot_no;
    }


};
class teachingemploye : public employee
{
    string designation;
    string specialization;
    string pay_scale;
 public :
     void getdata()
     {
         employee :: getdata();
         cout<<"enter designation of employee : ";
         getline(cin,designation);
         cout<<"enter specilization of employee :";
         getline(cin,specialization);
         cout<<"enter pay scale of employee :";
         getline(cin,pay_scale);

     }
     void putdata()
     {
         employee :: putdata();
          cout.width(20);cout <<left<< "Designation " << ":"<< designation<< endl;
          cout.width(20);cout <<left<< "specialization " << ":"<<specialization << endl;
         cout.width(20);cout <<left<< "pay_scale" << ":"<<pay_scale<< endl;
         cout << "---------------------------------"<<endl;

    }
    int searchid(int e_id)
    {
        return employee::searchid(e_id);
    }
};
class nonteachingemploye : public employee
{
   int salary;
 public :
     void getdata()
     {
      employee :: getdata();
      cout<<"Enter salary of employee :";
      cin>>salary;
     }
     void putdata()
     {
      employee :: putdata();
     cout.width(20);cout <<left<< "salary" <<":"<< salary << endl;
     cout << "---------------------------------"<<endl;
     }
      int searchid(int e_id)
    {
        return employee::searchid(e_id);
    }
};
int employee :: ave_exp=0;
int employee :: tot_no=0;
int main()
{
 int te;
 cout<<"Enter number of  teaching employee :";
 cin>>te;
 teachingemploye e[te];
 for(int i=0;i<te;i++)
 {
     e[i].getdata();
 }
 int nte;
 cout<<"enter number of non teaching employee :";
 cin>>nte;
 nonteachingemploye e1[nte];
 for(int i=0;i<nte;i++)
 {
     e1[i].getdata();
 }
 char x;
 int flag;
    do {
        int e_id;
        cout << "Enter an employee id : ";
        cin >> e_id;
        flag=0;
        for (int i = 0; i < te; i++)
        {
            int a=e[i].searchid(e_id);

            if(a==1)
            {
               e[i].putdata();
               flag=1;
               break;
            }
        }
        if(flag==0)
        {
            for (int i = 0; i < nte; i++)
            {
                int a=e1[i].searchid(e_id);

                if(a==1)
                {
                    e1[i].putdata();
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"error";
        }
        cout << endl <<"Press Y to get another employee detail, press N to exit: ";
        cin >> x;
        fflush(stdin);
    } while (x == 'Y' || x == 'y');
    employee :: expe();
}

