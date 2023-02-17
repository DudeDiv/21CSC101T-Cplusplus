#include <iostream>
#include <string>
using namespace std;
int main() {
  //We put "1" to indicate there's a ship
  bool ships[4][4] = {
    {'0','1','1','0'},
    {'0','0','0','0'},
    {'0','0','1','0'},
    {'0','0','1','0'}
  };
  //Keep track of how many hits the player has and how many turns they have played in these variables
  int hits = 0;
  int numberOfTurns = 0;
  //Allow the player to keep going untill they have hit all four ships
  while ( hits < 4) {
    int row, column;
    cout << "Selecting Coordinates\n";
  //Ask the player for a row
    cout << "Choose a row between 0 and 3: \n";
    cin >> row;
  //Ask the player for a column
    cout << "Choose a column between 0 and 3: \n";
    cin >> column;
  //Check if there's a ship in these coordinates
    if (ships[row][column]) {
      //If player hits a ship, remove it by setting the value as 0
      ships[row][column] = 0;
      //Increase the hit counter
      hits++;
      //Tell the player that they have hit a ship and how many ships are left
      cout << "Hit! " << (4-ships) << "left.\n\n";
    } else {
      //Tell the player that they missed
      cout << "Miss!\n\n";
    }
    //Count how many turns the player has taken
    numberOfTurns++;
  }
  cout << "Victory!\n";
  cout << "Yay! You won in " << numberOfTurns <<" turns.\n";
  return 0;
}
