#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;
void print_marksheet();

int main()
{
   print_marksheet();
   return 0;
}
void print_marksheet()
{
    int semester;
    char student_ID[8];
    char student_name[10];
    std::cout<<"Enter student ID :";
    std::cin>>student_ID;
    std::cout<<"Enter Student Name :";
    std::cin>>student_name;
    std::cout<<"Enter semester :";
    std::cin>>semester;
    fflush(stdin);

    char subject[3][30];
    int tmarks[3],pmarks[3];
    string tgrade[3],pgrade[3];
    int tgradept[3],pgradept[3];
    int tcradit[3],pcradit[3];
    float sgpa=0;
    for(int i=0;i<3;i++)
    {
        std::cout<<"Enter "<<i+1<<" subject name :";
        std::cin.getline(subject[i],30);
    }

    for(int i=0;i<3;i++)
    {
      //cout<<"Enter marks of "<<subject[i];
      cout<<"theory marks of "<<subject[i];
      cin>>tmarks[i];
      cout<<"practical marks of "<<subject[i];
      cin>>pmarks[i];
      cout<<"thoery cradit of "<<subject[i];
      cin>>tcradit[i];
       cout<<"practical cradit of "<<subject[i];
      cin>>pcradit[i];
    }
    for(int i=0;i<3;i++)
    {
    if(tmarks[i]>=80)
       {
        tgrade[i]="AA";
        tgradept[i]=10;
       }
    else if(tmarks[i]<80 && tmarks[i]>=73){
        tgrade[i]="AB";
         tgradept[i]=9;
    }
    else if(tmarks[i]<73 && tmarks[i]>=66){
        tgrade[i]="BB";
         tgradept[i]=8;
    }
        else if(tmarks[i]<66 && tmarks[i]>=60)
        {
            tgrade[i]="BC";
             tgradept[i]=7;
        }
        else if(tmarks[i]<60 && tmarks[i]>=55)
        {
            tgrade[i]="CC";
             tgradept[i]=6;
        }
        else if(tmarks[i]<55  && tmarks[i]>=50)
        {
             tgrade[i]="CD";
              tgradept[i]=5;
        }
        else if(tmarks[i]<50  && tmarks[i]>=45)
        {
         tgrade[i]="DD";
          tgradept[i]=4;
        }
        else if(tmarks[i]<45)
        {
          tgrade[i]="FF";
           tgradept[i]=0;
        }
        if(pmarks[i]>=80)
        {
         pgrade[i]="AA";
          pgradept[i]=10;
        }
    else if(pmarks[i]<80 && pmarks[i]>=73)
    {
        pgrade[i]="AB";
         pgradept[i]=9;
    }
    else if(pmarks[i]<73 && pmarks[i]>=66)
    {
         pgrade[i]="BB";
          pgradept[i]=8;
    }
        else if(pmarks[i]<66 && pmarks[i]>=60)
        {
           pgrade[i]="BC";
            pgradept[i]=7;
        }
        else if(pmarks[i]<60 && pmarks[i]>=55)
        {
          pgrade[i]="CC";
           pgradept[i]=6;
        }
        else if(pmarks[i]<55 && pmarks[i]>=50)
        {
             pgrade[i]="CD";
              pgradept[i]=5;
        }
        else if(pmarks[i]<50 && pmarks[i]>=45)
        {
            pgrade[i]="DD";
             pgradept[i]=4;
        }
        else if(pmarks[i]<45)
        {
             pgrade[i]="FF";
              pgradept[i]=0;
        }
    }
    std::cout<<"\nstudent details : \n";
    std::cout.width(15);
    std::cout<<left<<"student ID"<<":"<<student_ID<<"\n";
    std::cout.width(15);
    std::cout<<left<<"student name"<<":"<<student_name<<"\n";
    std::cout.width(15);
    std::cout<<left<<"semester"<<":"<<semester<<"\n";
     cout.width(20);
      cout << "\nSubject\t\tTheory\t\tPractical\n";

      for(int i=0;i<3;i++)
    {
        cout.width(20); cout << left << subject[i];
        cout.width(20); cout << left << tgrade[i];
        cout.width(20); cout << left << pgrade[i] << "\n";

    }
    float sum1=0,sum2=0;
    for(int i=0;i<3;i++)
    {
        sum1 = sum1 + (tcradit[i]+pcradit[i]);
        sum2 = sum2 + (pgradept[i]*pcradit[i])+(tgradept[i]*tcradit[i]);
    }
    cout<<"\nCiGi  "<<sum2;
    cout<<"\nCi "<<sum1;
    sgpa=sum2/(float)sum1;
    cout<<"sgpa : ";
    cout<<sgpa;
}
