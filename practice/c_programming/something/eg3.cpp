//Virtual polymorphism

#include<iostream>
using namespace std;
class Car
{
public: 
virtual void manual()=0;
};

class HondaCity: public Car
{
private:
int topSpeed;
public:
HondaCity()
{
this->topSpeed=110;
}
void manual()
{
cout<<"Honda city car manual"<<endl;
cout<<"Top speed of Honda City is: "<<this->topSpeed<<endl;
}
};
class Maruti800: public Car
{
private: 
int price;
public:
Maruti800()
{
this->price=50000;
}
void manual()
{
cout<<"Maruti 800 car manual"<<endl;
cout<<"Price of Maruti 800 is: "<<this->price<<endl;
}
};
int main()
{
int choice;
Car *c;
char m;
printf("1: Honda City\n");
printf("2: Maruti800 \n");
printf("Enter your choice: ");
scanf("%d",&choice);
c=NULL;
while((m=getchar())!='\n' && m!=EOF);
if(choice==1)
{
c=new HondaCity();
}else if(choice==2)
{
c=new Maruti800();
}
else
{
printf("Invalid choice\n");
}

if(c)
{
c->manual();
}
//Some work

if(c)
{
delete c;
}
return 0;
}
