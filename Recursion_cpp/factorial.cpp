#include<iostream>    
using namespace std;      
int factorial(int n)    
{    
    if(n<0){    
        return(-1);
    }   
    if(n==0){    
        return(1);
    }    
    else{
        return(n*factorial(n-1));        
    }       
}  
int main()    
{    
    int factorial(int);    
    int fact,value;    
    cout<<"Input: ";    
    cin>>value;    
    fact=factorial(value);    
    cout<<"Factorial of "<<value<<" is: "<<fact<<endl;    
    return 0;    
}    
