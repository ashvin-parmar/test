#include<thread>
#include<iostream>
using namespace std;
void doSomething()
{
	for(int i=1000;i<1500;i++) cout<<i<<" ";
}
int main()
{
	thread t(doSomething);

	for(int i=0;i<400;i++) cout<<i<<" ";
	t.join();
return 0;
}
