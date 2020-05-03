#include "console.h"

void Console:: enter()
  {
    cin>>a;
  }
void Console:: ON()
  {
   if(a==1)
    {
     cout<<"console ON"<<endl;
    }
  }
void Console:: OFF()
  {
    if(a==0)
    {
      cout<<"console OFF"<<endl;
    }
  }

void Button:: button()
  {
    if(c==d)
    {
      cout<<"Cheked";
    }
  }
void Button_Next:: button(int b){};

void Button_Previous:: button(int b){};

void Button_Volume:: button(int b){};
void Button_Volume:: button_plus(int b){};
void Button_Volume:: button_minus(int b){};
void TV:: reaction(int b)
    {
    switch(b)
    {
   case 0:
      cout<<"console OFF"<<'\n';
      break;
   case 1: 
       cout <<"console ON"<< '\n';
       break;
   case 2: 
       cout <<"You have moved to the next channel"<< '\n'; 
       break; 
   case 3:
       cout <<"You have moved to the previous channel"<< '\n';
       break;
   case 4:
       cout <<"You increased the sound"<< '\n';
       break;
   case 5:
       cout <<"You have reduced sound"<< '\n';
       break;
   case 10: 
       cout<<"The work is completed! Close this window."<<'\n';
    default:
       cout<<"ERROR"<<endl;
       break;
    }
    }
