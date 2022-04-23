#include<iostream>
// When you create an enumerated type, only blueprint for the variable is created.
// Enum is user defined datatype like Flags ...
using namespace std;
enum Flags{
    underline = 2,
    bold =1,
    italics =4
};
int main (){
        int myDesign = bold | italics; 
        cout << "My design is of points - " << myDesign;
        return 0;
}