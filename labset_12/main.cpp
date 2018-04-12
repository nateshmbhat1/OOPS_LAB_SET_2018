#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std; 


class ResistancePair
{
    public : 
    double r1 , r2 ; 
    ResistancePair(double a , double b ):r1(a) , r2(b){}
    virtual double find_total_resistance()=0 ;
};

class ParallelResistancePair: public ResistancePair
{
    public : 
    ParallelResistancePair(double a , double b):ResistancePair(a , b){}
    double combined_r ; 
    double find_total_resistance(){
       return (r1*r2) / (r1+r2) ;  
    }
};

class SeriesResistancePair: public ResistancePair
{
    public :
    SeriesResistancePair(double a , double b):ResistancePair(a , b){}

    double combined_r ; 
    double find_total_resistance(){
        combined_r = r1 + r2 ; 
        return combined_r ; 
    }

};


int main(void)
{
    ParallelResistancePair R1(1 , 2) , R2(3 , 4) , R3(5 , 6) , R4(7 , 8) ; 
    cout<<R1.find_total_resistance() <<endl;
    cout<<R2.find_total_resistance() <<endl;
    cout<<R3.find_total_resistance() <<endl;
    cout<<R4.find_total_resistance() <<endl;
}