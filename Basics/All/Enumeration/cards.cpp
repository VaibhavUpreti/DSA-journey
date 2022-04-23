#include<iostream>
using namespace std;
// An enum variable takes only one value out of many possible values.

enum Suit {
    club = 12,
    hearts = 21,
    diamond = 3,
    spades =2 ,
} card;

int main (){

    Suit suitname;
    char n1;
    cout<< "Enter any suit of cards - (out of club, hearts, diamond, spades )";
    cin >> n1;
    n1 = suitname;
    suitname = card;

    cout << "Size of enum variable is - " << sizeof(card) << " bytes"; 
}