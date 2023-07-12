// Bank Management 
#include<iostream>
using namespace std;
class bank
{
    private:
    string name;
    double acc;
    double bal;
    public:
    void get()
    {
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Acc \n";
        cin>>acc;
        cout<<"Balance\n";
        cin>>bal;
    }
    int balance()
    {
        return bal;
    }
    int deposite(int amount) 
    {
        bal+=amount; // how to do while coping string ??
        return bal;
    }
    int withdraw(int am)
    {
        bal=bal-am;
        return bal;
    }
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Account Number = "<<acc<<endl;
        cout<<"Balance = "<<bal<<endl;
    }
};
int main()
{
    int dep,with;
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    class bank obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].get();
    }
    cout<<"Your data\n";
    for(int i=0;i<n;i++)
    {
        obj[i].display();
    }





    // int ch;
    // do
    // {
    // cout<<"\n-----------------Menu--------------------\n";
    // cout<<"Press 1 for Display \n";
    // cout<<"Press 2 for Deposite \n";
    // cout<<"Press 3 for Withdraw \n";
    // cout<<"Press 0 for Accomplish \n";
    // cin>>ch;
    // if(ch==1)
    // {
    //     obj.display();
    // }
    // else if(ch==2)
    // {
    // cout<<"Enter your amount to deposite : ";
    // cin>>dep;
    // obj.deposite(dep);
    // }
    // else if(ch==3)
    // {
    // cout<<"Enter your amount to Withdraw : ";
    // cin>>with;
    // if(with>obj.balance())
    // {
    //     cout<<"Not enough money";
    // }
    // else
    // {
    // obj.withdraw(with);
    // obj.display();
    // cout<<"\nHave a nice day";
    // }
    // }
    // else if(ch==0)
    // {
    //     cout<<"\nThank you for choosing our services\n";
    // }
    // }
    // while(ch!=0);

}