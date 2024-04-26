#include<iostream>
#include<string.h>
using namespace std;

class lite
{
    int id;
    string title;
public:
    void getdata()
    {
        cout<<"ID :";
        cin>>id;
         cout<<"title :";
         fflush(stdin);
        getline(cin,title);
        fflush(stdin);
    }
    void putdata()
    {
        cout<<"ID :";
        cout<<id;
         cout<<"title :";
        cout<<title;

    }
};
class elite : public virtual lite
{
    string DOI;
public:
    void e_getdata()
    {
          getdata();
        cout<<"DOI :";
        getline(cin,DOI);
    }
    void e_putdata()
    {

        putdata();
        cout<<DOI;
    }
};
class hbound : public lite
{
    int no;
public:
    void h_getdata()
    {
          getdata();
        cout<<" number of copies  :";
        cin>>no;
    }
    void h_putdata()
    {
        putdata();
        cout<<no;
    }
};
class books : public elite,public hbound
{
    int isbn;
    char tb;
public:
    void bookget()
    {
        cout<<"ISBN :";
        cin>>isbn;
        cout<<"enter e for copy and h for hardbound :";
        cin>>tb;
          if(tb == 'E'|| tb == 'e'){
            e_getdata();
        }
        else if(tb == 'H'|| tb == 'h'){
         h_getdata();
        }
    }
    void bookput()
    {
         if(tb == 'E'|| tb == 'e'){
            e_putdata();
        }
        else if(tb == 'H'|| tb == 'h'){
         h_putdata();
        }
        cout<<isbn;

    }
};
class magazine : public elite,public hbound
{
    int issn;
    char tm;
public:
    void magaget()
    {
         cout<<"ISSN :";
        cin>>issn;
        cout<<"enter e for copy and h for hardbound :";
        cin>>tm;
         if(tm=='E'||tm=='e'){
            e_getdata();
        }
        else if(tm=='H'||tm=='h'){
         h_getdata();
        }
    }
    void magaput()
    {
          if(tm=='E'||tm=='e'){
            e_putdata();
        }
        else if(tm=='H'||tm=='h'){
         h_putdata();
        }
        cout<<issn;
    }
};

int main()
{
     books b[100];
     magazine m[100];
     int bcount=0;
     int mcount=0;
     int B,a;
     char x,y,z;
     do
     {
    cout<<"Enter 1 : Add book data"<<endl;
    cout<<"Enter 2 : Add magazine data"<<endl;
    cout<<"Enter 3 : List all books"<<endl;
    cout<<"Enter 4 : List all magazine"<<endl;
    cout<<"Enter your choice";
    cin>>a;
    switch(a)
     {
          case 1:
                  do
                  {
                      b[bcount].bookget();
                      bcount++;
                       cout<<"Are you want to enter a book?:";
                       cin >> x;
                  }while(x=='Y'||x=='y');
                  break;
          case 2:do
                  {
                      m[mcount].magaget();
                      mcount++;
                       cout<<"Are you want to enter a book?:";
                       cin >> y;
                  }while(y=='Y'||y=='y');
                  break;
          case 3:
            { cout<<"List of All Books"<<endl;
            for (int i = 0; i < bcount; i++)
            {
                b[i].bookput();
                cout<<endl;
            }
            }break;

          case 4:
             {cout<<"List of All Magazines"<<endl;
            for(int i=0;i<mcount;i++){
                m[i].magaput();
                cout<<endl;
            }


     }
     }
       cout<<"Do you want to Explore Another options?(Y/N):";
        cin>>z;
     }while(z=='Y'||z=='y');
}

