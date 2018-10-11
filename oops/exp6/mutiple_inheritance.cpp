#include<iostream>
using namespace std;
class student
{
  int rollno;
  public:
  void get()
  {
    cin>>rollno;
  }
  void put()
  {
    cout<<"\nRoll Number:"<<rollno;
  }
};

 class marks
 {
   int m[5];
   protected:
   int sum;
   public:
     marks()
     {
       sum=0;
     }
   void get_marks()
   { cout<<"\nEnter marks out of 100:";
     for(int i=0;i<5;i++)
     {
       cin>>m[i];
       sum+=m[i];
     }
   }

   void put_marks()
   { cout<<"\n";
     for(int i=0;i<5;i++)
     cout<<" "<<m[i];
   }

 };

 class result:public student,public marks
 {
   float percentage;
   public:
   void put_result()
   {
     percentage= (sum*100)/500;
     put();
     put_marks();
     cout<<"\nPercentage:"<<percentage;
   }

 };

 int main()
 {
   result o;
   o.get();
   o.get_marks();
   o.put_result();
   return 0;
 }
