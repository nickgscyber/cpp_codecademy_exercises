#include <iostream>
#include <stdlib.h>

/*
This program will prompt the user to select either Rock, Paper, Scissors. 

Computer randomly selects one of the options

Compare user's choice with computer choice and output winner
*/

using namespace std;

int main() {

  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0; 
  int counter = 20;
  
  while(counter > 0){
    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";

    cout << "1) Rock\n";
    cout << "2) Paper\n";
    cout << "3) Scissors\n";

    cout << "SHOOT!\n";

    //Take in user input
    cin >> user;

    //Check if user wins
    if(user == 1 && computer == 3) {
      cout << "You win!\n";
    } else if(user == 2 && (computer == 1)) {
      cout << "You win!\n";
    } else if(user == 3 && computer == 2) {
      cout << "You win!\n";
    } else if(user == computer) {
      cout << "DRAW!\n";
    } else {
      cout << "You lose!\n";
    }
    //Decrement counter
    counter -= 1;
  }
}