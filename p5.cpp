#include<iostream>
using namespace std;
int c=0;
class circle
{
    int radius;

    int a;
  public:
      circle()
      {
          radius=1;
          c++;
      }
      circle(int a)
      {
          radius=a;
          c++;
      }
      circle(circle &s)
      {
          radius=s.radius;
          c++;

      }
      display()
      {
          cout<<"circle with radius"<<radius<<"has area"<<3.14*radius*radius<<endl<<endl;
      }
      obj()
      {
          cout<<"total objects are"<<c<<endl;
      }
    ~circle()
    {
        cout<<" one object deleted"<<endl;
        c--;
        obj();

    }
};
int main()
{
    circle v;
    v.display();
    circle v2(20);
    v2.display();
    circle v3(v);
    v3.display();


}
