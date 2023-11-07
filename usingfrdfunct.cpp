#include<iostream>
using namespace std;
class B;
class A{
private: 
int v1;
public:
 void setdata(int val)
 {
 v1=val;
 }
 int display()
 {
 return v1;
 }
 friend void swap(A &x,B &y);
 };
 
 class B{
 private:
 int v2;
 public:
  void setdata(int val)
 {
   v2=val;
 }
 int display()
 {
 return v2;
 }
 friend void swap(A &x,B &y);
 };
 
 void swap(A &x,B &y)
 {
 int temp;
 temp=x.v1;
 x.v1=y.v2;
 y.v2=temp;
 }
 
 int main()
 {
 A a;
 B b;
 a.setdata(10);
 b.setdata(20);
 cout<<"Before swap"<<endl;
 cout<<"a="<<a.display()<<endl;
 cout<<"b="<<b.display()<<endl;
 swap(a,b);
 cout<<"After swap"<<endl;
 cout<<"a="<<a.display()<<endl;
 cout<<"b="<<b.display()<<endl;
 }
 
