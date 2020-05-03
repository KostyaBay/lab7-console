#include <iostream>
using namespace std;

class Console
{
  public:
  bool a=0;
  void enter();
  void ON();
  void OFF();
};

class Button
{
  int c,d;
  public:
  virtual void button();
};

  class Button_Next:public Button,Console
  {
    public:
    void button(int b);
  };

  class Button_Previous:public Button,Console
  {
    public:
    void button(int b);
  };

  class Button_Volume: public Button,Console
  {
    public:
    void button(int b);

    void button_plus(int b);
  
    void button_minus(int b);
  };

class TV
{
   public:
    void reaction(int b);
  };
