#include<thread>
#include<iostream>
using namespace std;
void doSomething()
{
for(int i=0;i<2000;i++) 
{
//cout<<j<<" ";
printf("Enter a number: ");
int x;
cin.ignore(100,'\n');
cout<<x<<"Upeer ";
}
}
int main()
{
thread t(doSomething);
for(int j=10000;j<10500;j++)
{
//cout<<j<<" ";
printf("Enter a number: ");
int x;
cin>>x;
cin.ignore(100,'\n');
 cout<<x<<" ";
}
t.join();
return 0;
}
