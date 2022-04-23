#include <iostream>  
using namespace std;  
int main(){  
ineligible:    
    cout<<"Not eligible\n";    
    cout<<"Enter your age:\n";    
    int age;  
    cin>>age;  
    if (age < 18){    
        goto ineligible;    
    }    
    else{    
        cout<<"Eligible";     
    }         
}  