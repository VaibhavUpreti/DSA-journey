#include<iostream>
using namespace std;

int main (int argc , char *argv[]){

    int n;
    cout << "Enter a number to check even or odd: ";
    cout    << "\n__________________________________";
    cin >> n;

    if (n%2==0){
        cout << "Even Number"<<endl;
    }
    else {
        cout << "Odd Number ";
    }
    return 0;
}