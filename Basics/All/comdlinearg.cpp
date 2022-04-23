// Name of program is commlinearg.cpp
// CLA - command line arguement
// argc - is int - and stores the number of CLA passed including the name of program
// argv - array of character pointers listing all the arguements
/*
Argv[0] - name of the program
Argv[1] - 1st CLA
Argv[n]- Last CLA
Argv[argc] - null pointer
*/
#include<iostream>
using namespace std;

int main(int argc, char *argv[]){

cout << "You have entered- " << argc
    <<    " \t arguements"     << "\n";
    for (int i; i< argc; ++i)    
        cout << argv[i] << "\n";
    return 0;
}