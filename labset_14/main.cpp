#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std; 

template<class type> 
void insertion_sort(type * arr , int n )
{
    int key , j ; 
    for(int i=1 ; i<n ; i++)
    {
        key = arr[i] ;  
        j = i-1 ; 

        while(j>=0  && key<arr[j])
        {
            arr[j+1] = arr[j] ; 
            j-- ; 
        }
        arr[j+1] = key ; 
    }
}


template<class type> 
void selection_sort(type * arr , int n )
{
    type min ; 
    int mini  ;
    for(int i =0 ; i<n ; i++)
    {
        min = arr[i]  ;  
        mini = i ; 
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<min) { min =  arr[j] ; mini =  j  ;  }
        }
        swap(arr[i] , arr[mini]) ; 
    }
}


template<class type> 
void display(type * arr  , int n )
{
    for(int i =0 ; i < n ; i++)
    {
        cout<<arr[i] <<"\t" ; 
    }
    cout<<endl; 
}



int main()
{
    int arr[] = {10 , 3 , 5 , 2 , 1} ; 
    float farr[] = { 23.3 , 3.1 , 30.3  , 2.3 , 3} ; 
    selection_sort(farr, 5) ; 
    selection_sort(arr, 5) ; 

    display(farr , 5) ; 
    display(arr , 5) ;



    int arr1[] = {10 , 3 , 5 , 2 , 1} ; 
    float farr1[] = { 23.3 , 3.1 , 30.3  , 2.3 , 3} ; 

    insertion_sort(arr1 , 5) ; 
    insertion_sort(farr1 , 5) ; 

    display(farr , 5) ; 
    display(arr , 5) ;

}