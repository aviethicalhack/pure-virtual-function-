#include <iostream>
using namespace std;
class Base  
{
  public:
  void print()
  {
    cout<<"base print"<<endl;

  }
virtual void show()=0;
};
class derived:public Base
{
   public:
void print()
  {
     cout<<"derived print"<<endl;
  }
void show()
  {
     cout<<"derived show";
  }
};
int main()
{
   Base * ptr;
   derived d;
    ptr=&d;
    ptr->print();
    ptr->show();
}
