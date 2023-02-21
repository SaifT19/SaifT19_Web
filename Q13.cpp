#include<iostream.h>
#include<conio.h>
using namespace std;

class temp

{
  int a, b, add;
  public:

  void input() 
{
  cout << "Enter the value of x and y:";
  cin >> x>>y;
 }

  friend void add(temp &t);
  void display() 
 {
   cout << "The sum is :" << z;
 }
};

  void add(temp &t) 
{
   t.add = t.a + t.b;
}
  int main() 
{
   temp t1;
   t1.input();
   add(t1);
   t1.display();

   return 0;
   
}