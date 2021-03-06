# include <iostream>
# include <curses.h>
# include <time.h>
# include <ncurses.h>

using namespace std;

class clok
 {
   private:
   int hh,mm,ss;

   public:
   void get();
   void display();
   void pass(tm *a);
   void alarm(clok &c);
   void sleep(unsigned int mseconds);
 };

void clok::sleep(unsigned int mseconds)
{
  clock_t goal = mseconds + clock();
  while (goal > clock());
}

void clok::get()
 {
   e: cin>>hh>>mm>>ss;
   if(((hh>23)&&(hh<0))||((mm>59)&&(mm<0))||((ss>59)&&(ss<0)))
     {
       cout<<"\n you have entered invalid time ";
       cout<<"\n please try again";
       goto e;
     }
 }

void clok::display()
 {
   cout<<hh<<":"<<mm<<":"<<ss;
 }

void clok::pass(tm *a)
 {
    hh = a->tm_hour;
    mm = a->tm_min;
    ss = a->tm_sec;
 }

void clok::alarm(clok &c)
 {
   clok d;
   long int e;
   int i;
   d.hh = hh-c.hh;
   d.mm = mm-c.mm;
   d.ss = ss-c.ss;
   e = (d.hh*3600)+(d.mm*60)+(d.ss);
   for(i=e;i>=1;i--)
     {
       sleep(1000);
     }
   for(i=0;i<4;i++)
      {
         cout<<"\n alarm!!!! \a\a";
         sleep(1000);
      }

 }


int main()
{  int a;
  clok c1,c2;
  time_t t;
  tm *area;
  clear();

  time(&t);
  area = localtime(&t);
        clear();
        cout<<"current time is: "<<asctime(area);
        cout<<"\n set the time of alarm ";
        c1.get();
        c1.display();
        c2.pass(area);
        c1.alarm(c2);
        getch();
  return 0;
}
