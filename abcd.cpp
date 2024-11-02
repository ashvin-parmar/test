#include<thread>
#include<iostream>
using namespace std;
void doSomething()
{
for(int i=0;i<200;i++) cout<<i<<" ";
}
int main()
{
thread t(doSomething);
for(int j=600;j<640;j++)
{
printf("Enter a number: ");
int x;
cin>>x;
cin.ignore(100,'\n');
 cout<<x<<" ";
}
t.join();
return 0;
}
