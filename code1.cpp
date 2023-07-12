// Polymorphism Mini Project 
#include<iostream>
using namespace std;
class Vehical
{
protected:
int model;
int make;
int year;
public:
Vehical()
{
    model=make=year=0;   
}
virtual void startEngine()
{
    cout<<"Vehical Engine Started\n";
}
};
class Car : public Vehical
{
    public:
    void startEngine()
    {
        cout<<"Car Engine Started\n";
    }
};
class Truck : public Vehical
{
    public:
    void startEngine()
    {
        cout<<"Truck Engine Started\n";
    }
};
class Motercycle : public Vehical
{
    public:
    void startEngine()
    {
        cout<<"Motorcycle Engine Started\n";
    }
};
int main()
{
    int ch;
    Vehical *obj;
    cout<<"Main menu\n";
    cout<<"Press 1 to start Car\n";
    cout<<"Press 2 to start Truck\n";
    cout<<"Press 3 to start Motercycle\n";
    cin>>ch;
    if(ch==1)
    {
        obj=new Car();
    }
    else if(ch==2)
    {
        obj=new Truck();
        
    }
    else if(ch==3)
    {
        obj=new Motercycle();
    }
    obj->startEngine();

}