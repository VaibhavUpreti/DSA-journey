#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter marks to check grade out of 100:";
    cin >> n;
    if (n <0 || n >100)    
        {    
        cout<<"wrong number";    
        }    
    else if(n >= 0 && n < 50){    
        cout<<"Fail";    
        }    
    else if (n >= 50 && n < 60)    
        {    
        cout<<"D";    
        }    
    else if (n >= 60 && n < 70)    
        {    
        cout<<"C";    
        }    
    else if (n >= 70 && n < 80)    
        {    
        cout<<"B";    
        }    
    else if (n >= 80 && n < 90)    
        {    
        cout<<"A";    
        }    
    else if (n >= 90 && n <= 100)    
        {    
        cout<<"A+";  
        }  

}