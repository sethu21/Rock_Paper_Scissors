//g++ -o ex_02 ex_02.cpp && ./ex_02
#include <iostream>
using namespace std;

enum class Choice {ROCK, PAPER, SCISSORS };
void determine_winner(Choice player1_choice, Choice player2_choice);
int main (){
  char play_again;
  
  
}

Choice get_player_choice() {
  int choice;
  do { 
   cout << " Enter your choice(0 for Rock, 1 for Paper, 2 for Scissors): ";
    cin >> choice;
    
    
  }while (choice <0 || choice > 2);
  return static_cast<Choice>(choice);
}
void determine_winner(Choice player1_choice, Choice player2_choice){
  if (player1_choice == player2_choice){
    cout<< "It's a tie! " << endl;
  }else if(
    (player1_choice == Choice::ROCK && player2_choice == Choice::SCISSORS)|| (player1_choice == Choice::PAPER && player2_choice == Choice::ROCK) || (player1_choice == Choice::SCISSORS && player2_choice == Choice::PAPER)
  ){ cout<< "Player 1 wins"<< endl;}else{cout<< "Player 2 wins"<< endl;
    
  }
}