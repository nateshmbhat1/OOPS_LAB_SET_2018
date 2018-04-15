#include<iostream>
#include<stack>
#include<cstdlib>


using namespace std ; 
class DB  ; 
class DM ; 

class DM
{
    int m , cm ; 
    public : 

    DM():m(0) , cm(0) {}

    DM(int dist){
        m = dist/100 ; 
        cm = dist%100 ; 
    }
    DM(int mvar , int cmvar):m(mvar) , cm(cmvar) {}
    void getData() ; 
    void display(){cout<<"Distance = "<<m << " metres" << cm << " centimeters. "<<endl; }

    friend void addDist(DB &, DM) ; 
};

void DM::getData(){
    cout<<"Enter m and cm : " ; cin>>m >>cm ; 
}

class DB 
{
    int ft , inch ; 
    public : 

    
    DB(int ftvar , int inchvar):ft(ft) , inch(inchvar) {}
    DB(int var){ft = var/12 ; inch = var%12 ; }

    DB():ft(0) , inch(0) {}
    void getData() ;
    friend void addDist(DB& , DM) ; 
    void display(){cout<<"Distance = "<<ft << " feet " << inch << " inches . "<<endl; }
};


void DB::getData(){
    cout<<"Enter ft and inches : " ; cin>>ft >>inch; 
}





void addDist( DB& db ,DM dm)
{
    //1ft = 0.304 metres ;
    int inches = db.inch + db.ft*12 + dm.m*39 + dm.cm/100 * 39 ;
    cout<<"inches " << inches <<endl; 
    db.inch = inches ; 
    db.ft = inches /12 ; 
    db.inch = db.inch%12 ; 
}




int main(void)
{
    DB db  ; 
    db.getData() ; 
    DM dm ; 
    dm.getData() ; 
    addDist(db , dm) ; 
    db.display() ; 
    dm.display() ; 
}