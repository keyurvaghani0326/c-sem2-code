#include<iostream>
using namespace std;
class result;
class student
{
     char student_ID[8];
    char student_name[10];
     int semester;
public:
    void getdata_stu();
    void putdata_stu();
    void getresult(result &r);
    void putresult(result &r);
};
    void student :: getdata_stu()
    {
    cout<<"Enter student ID :";
    cin>>student_ID;
    cout<<"Enter Student Name :";
    cin>>student_name;
    cout<<"Enter semester :";
    cin>>semester;
    fflush(stdin);
    }
    void student :: putdata_stu()
    {
    cout<<left<<"student ID"<<":"<<student_ID<<"\n";
    cout.width(15);
    cout<<left<<"student name"<<":"<<student_name<<"\n";
    cout.width(15);
    cout<<left<<"semester"<<":"<<semester<<"\n";
    }



class result
{
     char subject[3][30];
    int tmarks[3],pmarks[3];
    string tgrade[3],pgrade[3];
    int tgradept[3],pgradept[3];
    int tcradit[3],pcradit[3];
    float sgpa=0;
    friend class student;
};

void student :: getresult(result &r)
{
    for(int i=0;i<3;i++)
    {
        std::cout<<"Enter "<<i+1<<" subject name :";
        std::cin.getline(r.subject[i],30);
    }

    for(int i=0;i<3;i++)
    {
      //cout<<"Enter marks of "<<subject[i];
      cout<<"theory marks of "<<r.subject[i];
      cin>>r.tmarks[i];
      cout<<"practical marks of "<<r.subject[i];
      cin>>r.pmarks[i];
      cout<<"thoery cradit of "<<r.subject[i];
      cin>>r.tcradit[i];
       cout<<"practical cradit of "<<r.subject[i];
      cin>>r.pcradit[i];
    }
    for(int i=0;i<3;i++)
    {
        if(r.tmarks[i]>=80)
        {
         r.tgrade[i]="AA";
         r.tgradept[i]=10;
        }
    else if(r.tmarks[i]<80 && r.tmarks[i]>=73){
        r.tgrade[i]="AB";
         r.tgradept[i]=9;
    }
    else if(r.tmarks[i]<73 && r.tmarks[i]>=66){
        r.tgrade[i]="BB";
         r.tgradept[i]=8;
    }
        else if(r.tmarks[i]<66 && r.tmarks[i]>=60)
        {
            r.tgrade[i]="BC";
             r.tgradept[i]=7;
        }
        else if(r.tmarks[i]<60 && r.tmarks[i]>=55)
        {
            r.tgrade[i]="CC";
             r.tgradept[i]=6;
        }
        else if(r.tmarks[i]<55  && r.tmarks[i]>=50)
        {
             r.tgrade[i]="CD";
              r.tgradept[i]=5;
        }
        else if(r.tmarks[i]<50  && r.tmarks[i]>=45)
        {
         r.tgrade[i]="DD";
          r.tgradept[i]=4;
        }
        else if(r.tmarks[i]<45)
        {
          r.tgrade[i]="FF";
           r.tgradept[i]=0;
        }
        if(r.pmarks[i]>=80)
        {
         r.pgrade[i]="AA";
          r.pgradept[i]=10;
        }
    else if(r.pmarks[i]<80 && r.pmarks[i]>=73)
    {
        r.pgrade[i]="AB";
         r.pgradept[i]=9;
    }
    else if(r.pmarks[i]<73 && r.pmarks[i]>=66)
    {
         r.pgrade[i]="BB";
          r.pgradept[i]=8;
    }
        else if(r.pmarks[i]<66 && r.pmarks[i]>=60)
        {
           r.pgrade[i]="BC";
            r.pgradept[i]=7;
        }
        else if(r.pmarks[i]<60 && r.pmarks[i]>=55)
        {
          r.pgrade[i]="CC";
           r.pgradept[i]=6;
        }
        else if(r.pmarks[i]<55 && r.pmarks[i]>=50)
        {
             r.pgrade[i]="CD";
              r.pgradept[i]=5;
        }
        else if(r.pmarks[i]<50 && r.pmarks[i]>=45)
        {
            r.pgrade[i]="DD";
             r.pgradept[i]=4;
        }
        else if(r.pmarks[i]<45)
        {
             r.pgrade[i]="FF";
              r.pgradept[i]=0;
        }
    }
}
void student :: putresult(result &r)
    {
         /*std::cout<<"\nstudent details : \n";
    std::cout.width(15);
    std::cout<<left<<"student ID"<<":"<<student_ID<<"\n";
    std::cout.width(15);
    std::cout<<left<<"student name"<<":"<<student_name<<"\n";
    std::cout.width(15);
    std::cout<<left<<"semester"<<":"<<semester<<"\n";
     cout.width(20);*/
      cout << "\nSubject\t\tTheory\t\tPractical\n";

      for(int i=0;i<3;i++)
    {
        cout.width(20); cout << left << r.subject[i];
        cout.width(20); cout << left << r.tgrade[i];
        cout.width(20); cout << left << r.pgrade[i] << "\n";

    }
    float sum1=0,sum2=0;
    for(int i=0;i<3;i++)
    {
        sum1 = sum1 + (r.tcradit[i]+r.pcradit[i]);
        sum2 = sum2 + (r.pgradept[i]*r.pcradit[i])+(r.tgradept[i]*r.tcradit[i]);
    }
    cout<<"\nCiGi  "<<sum2;
    cout<<"\nCi "<<sum1;
    r.sgpa=sum2/(float)sum1;
    cout<<"sgpa : ";
    cout<<r.sgpa;
    }
int main()
{
    student s;
    result r;
    s.getdata_stu();
    s.putdata_stu();
    s.getresult(r);
    s.putresult(r);
}
