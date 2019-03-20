#include <iostream>

using namespace std;

class time
{
    private:
       int hrs;
       int mins;
       int secs;
    public:
       time() : hrs(0), mins(0), secs(0)
       {}
       time(int h1, int m1, int s1) : hrs(h1), mins(m1), secs(s1)
      {}
      void display() const
      {
        cout << "the time is " << hrs << ":" << mins << ":" << secs;

        }
     time add(time t1)
        {
          time tmp;
          tmp.hrs = hrs + t1.hrs;
          tmp.mins = mins + t1.mins;
          tmp.secs = secs + t1.secs;
          if(tmp.secs>= 60)
              {tmp.mins++;
               tmp.secs-=60;
              }
          if(tmp.mins >= 60)
             {tmp.hrs++;
              tmp.mins -= 60;
             }
          if(tmp.hrs>=12)
             tmp.hrs -= 12;


         return tmp;


        }
};


int main()
{
    time tt1(12, 60, 60);
    time tt2(5, 30, 10);
    time tt3;
    tt3 = tt1.add(tt2);
    tt3.display();
    return 0;
}
