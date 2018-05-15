#include<bits/stdc++.h>
using namespace std ; 

class bankAccount{
    string depositor , holder , type ; 
    int balance; 

    public : 

    bankAccount(string d , string h , string t , int b):depositor(d) , holder(h) , type(t) , balance(b){}

    void deposit(int money)
    {
        balance+=money ;  
        cout<<"\nDeposited " <<money <<" rupees" <<endl;  
    }
    void withdraw(int money)
    {
        if(money>balance)
            {cout<<"Not enough balance ! " ; return ;  }
        balance-=money ;  
        cout<<"\nWithdrawed " <<money <<" rupees" <<endl;  
    }

    void display()
    {
        cout<<endl<<endl ; 
        cout<<"Balance = " << balance ; 
    }
};

int main()
{
    bankAccount obj("Ramesh" , "Natesh" , "fixed" , 100) ; 
    obj.deposit(100) ; 
    obj.withdraw(300) ; 
    obj.deposit(300) ; 
    obj.withdraw(500) ; 
    obj.display() ; 
}