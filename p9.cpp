9
#include<iostream>
using namespace std;

class mm;


class cm
{
    float c;
public:
    void getcmdata();
    void putcmdata();
    cm()
    {
        c=0;
    }
    cm(mm &x);

    float cmdata();

};

class mm
{
    float m;
public:
    void getmmdata();

    void putmmdata();
    mm()
    {
        m=0;
    }
    mm(cm &x);

    float mmdata();

};
    void cm::getcmdata()
    {
        cout<<"Enter measurement in cm : ";
        cin>>c;

    }
    void cm::putcmdata()
    {
        cout<<"Measurement in cm : "<<c<<endl;
    }
    cm::cm(mm &x)
    {
        c=x.mmdata()/10;
    }
    float cm::cmdata()
    {
        return c;
    }

    void mm::getmmdata()
    {
        cout<<"Enter measurement in mm : ";
        cin>>m;
    }

    void mm::putmmdata()
    {
        cout<<"Measurement in mm : "<<m<<endl;
    }
    mm::mm(cm &x)
    {
        m=x.cmdata()*10;
    }
    float mm::mmdata()
    {
        return m;
    }


int main()
{
    class cm n1;
    class mm n2;
    int n;
next :   cout<<"Enter 1 : cm to mm converter"<<endl;
    cout<<"Enter 2 : mm to cm converter"<<endl;
    cin>>n;

    switch(n)
    {
    case 1:
        n1.getcmdata();
        n2=n1;
        n2.putmmdata();
        break;
    case 2:
        n2.getmmdata();
        n1=n2;
        n1.putcmdata();
        break;
    }

    char c;
    cout<<"Please Y to continue,Press N to exit :";
    cin>>c;

    if(c=='y'||c=='Y')
    {
        goto next;
    }
}
