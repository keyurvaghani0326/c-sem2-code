#include<iostream>
using namespace std;
class complex
{
    float r1,i1;
public:
    void getdata()
    {
        cout<<"Enter real part :";
        cin>>r1;
        cout<<"Enter imaginary part :";
        cin>>i1;
    }
    void putdata()
    {
        cout<<r1<<'+'<<i1<<"i";
    }
    complex operator+ (complex &a)
    {
        complex c;
        c.r1=r1+a.r1;
        c.i1=i1+a.i1;
        return c;
    }
    complex operator- (complex &a)
    {
        complex c;
        c.r1=r1-a.r1;
        c.i1=i1-a.i1;
        return c;
    }
    complex operator! ()
    {
        complex c;
        c.r1=-r1;
        c.i1=-i1;
        return c;
    }
    complex operator* (complex &a)
    {
        complex c;
        c.r1=(r1*a.r1)-(i1*a.i1);
        c.i1=(r1*a.i1)+(i1*a.r1);
         return c;
    }
     complex operator/ (complex &a)
    {
        complex c;
        c.r1=((r1* c.r1)+(i1* c.i1))/((c.r1*c.i1) +(c.i1*c.i1));
        c.i1=((i1* c.r1)-(r1* c.i1))/((c.r1*c.r1) +(c.i1*c.i1));
        return c;
    }
};
int main()
{
    complex c1,c2,c3,c4;
    char o;
    c1.getdata();
    c2.getdata();
    cout<<"(+) addition"<<endl<<"(-) subtraction"<<endl;
    cout<<"(*) multiplication"<<endl<<"(/) division"<<endl<<"(!) negation"<<endl;
    cout<<"Enter your choice :";
    cin>>o;
    switch(o)
    {
        case '+':c3=c1+c2;
        break;
        case '-':c3=c1-c2;
          break;
        case '!':c4=!c1;

        c3=!c2;
        c4.putdata();
          break;
        case '*':c3=c1*c2;
          break;
        case '/':c3=c1/c2;
          break;
    }

    c3.putdata();
    cout<<"\n\n\n";
    return 0;
}

