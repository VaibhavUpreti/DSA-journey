#include<iostream>

using namespace std;
int main(){
    char oper;
    float n1 , n2;

    cout << "Enter the operator which you want to perform: + , - , * , / ";  // Same as printf in C
    cin >> oper; // Same as scanf in C

    cout << "Enter the two Operands ";  // Same as printf in C
    cin >> n1 >> n2 ;  // Same as scanf in C

    switch (oper){
        case '+':
            cout << n1 << "+" << n2 << "=" << n1+n2 ; 
            break;

        case '-':
            cout << n1 << "-" << n2 << '=' << n1-n2 ;
            break;

        case '*':
            cout << n1 << '*' << n2 << '=' << n1*n2 ;
            break;

        case '/':
            cout << n1 << '*' << n2 << '=' << n1/n2 ;
            break;

        default:
            cout << "Pls enter the correct Operator";
            break;
    }
    return 0;
}

