#include "console.h"

int main()
{
  cout<<"Push 0 to turn console OFF"<<endl;
  cout<<"Push 1 to turn console ON"<<endl;
  cout<<"Push 2 to moved to the next channel"<<endl;
  cout<<"Push 3 to moved to the previous channel"<<endl;
  cout<<"Push 4 to increased the sound"<<endl;
  cout<<"Push 5 to reduced sound"<<endl;
  cout<<"Push 10 to exit"<<endl;
  int b;
  Console a;
    a.enter();
    a.ON();
    a.OFF();
  while(b!=10) 
  { 
  cout<<"Enter button: ";
  cin>>b;
  Button_Next c;
    c.button(b);
  Button_Previous d;
    d.button(b); 
  Button_Volume e;
    e.button(b);
    e.button_plus(b);
    e.button_minus(b);
  TV x;
    x.reaction(b);
  }
    return 0;
}
