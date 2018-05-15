#include<iostream>
#include<cstdlib>

using namespace std ; 

class RainGuage
{
    protected : 
    int cm ; 
    string name ; 

    public : 

    RainGuage() ; 
    void fnReadMeasurement() ; 
    void fnDispReading() ; 
    friend void findAvg(const RainGuage * , const int &) ; 
};

void findAvg(const RainGuage * objs , const int& n)
{
    int sum =0 ; 
    for(int i =0 ; i<n ; i++) 
    {
        sum+=objs[i].cm ; 
    }
    cout<<" Average rainfall is " <<sum/n ; 
}

RainGuage::RainGuage():cm(0) , name("") {}

void RainGuage::fnDispReading()
{
    cout<<" Rain cm = " <<this->cm << " city = " <<this->name <<endl; 
}

void RainGuage::fnReadMeasurement()
{
    cout<<"Enter name of city : " ;
    cin>>name; 
    cm = random()%21 ; 
}


int main()
{
    srand(time(NULL)) ; 
    int n; 
    cout<<"Enter number of cities : " ; cin>>n ; 
    RainGuage * arr = new RainGuage[n] ;  
    for(int i =0 ; i<n ; i++)
        arr[i].fnReadMeasurement() ; 
    
    for(int i=0 ; i<n ; i++ )
        arr[i].fnDispReading() ; 

    findAvg(arr , n) ; 
}