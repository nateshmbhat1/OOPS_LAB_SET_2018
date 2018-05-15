#include<bits/stdc++.h>
using namespace std; 

class Circle
{
    private : 
    int x, y ; 
    int r ; 

    public : 
        Circle(){r =0 ; x = y = 0; }
        Circle(int rad , int xvar , int yvar):r(rad) , x(xvar) , y(yvar){}
        friend void operator==(const Circle& c1 , const Circle& c2) ; 
        // ~Circle(){cout<<"Destructing object !" ; }
        friend double dist(const Circle& c1 ,const Circle& c2) ; 
};

double dist(const Circle& c1 ,const Circle& c2)
{
    int x1 = c1.x , y1 = c1.y , x2 = c2.x , y2 = c2.y ; 
    return sqrt((x2-x1)*(x2-x1) +(y2-y1) *(y2-y1)) ; 
}

void operator==(const Circle& c1 , const Circle& c2){

if(c1.x ==c2.x && c1.y == c2.y)
    cout<<endl<<"Concentric " <<endl; 

else if (dist(c1 , c2)> c1.r+c2.r)
    cout<<"Disjoint !"<<endl; 
else if(dist(c1 , c2) < c1.r+c2.r)
    cout<<"Intersecting" <<endl; 
else
    cout<<"Touching\n" ; 

}

int main()
{
    Circle c1(2 , 0 , 0) , c2(2 ,4 , 0) ; 
    c1==c2 ; 
}