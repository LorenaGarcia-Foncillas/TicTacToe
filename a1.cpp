/*Lorena Garcia-Foncillas Macias CID:01572513*/

#include <iostream>
#include <string.h>
#include <limits>

int main() {
  int a, b, c, d;
  char A, B;
  int e = 1; /*Call the variables*/
  std::string board[3][3]= {{" "," "," "}, {" "," "," "}, {" "," "," "}};
  std::cout << "Let's play tic-tac-toe\n";
   
/*Create 8 rounds*/
while (e <= 8){
    /*Print the board*/
    std::cout << "--------\n" << board[0][0] << " |" << board[0][1] << " |"<< board[0][2] << "\n" << board[1][0] << " |" << board[1][1] << " |" << board[1][2] << "\n" << board[2][0] << " |" << board[2][1] << " |" << board[2][2] << "\n" << "--------\n";
    /*Ask the player*/
    std:: cout << "Choose a row:\n";
	std::cin >> A;
	/*Cause we are using char we need to change the value of A and B into int*/
    a = A - '0';
	/*If the user enters more than one value the two lines below will ignore them after the first one*/
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Choose a column:\n";
    std::cin >> B;
	b = B - '0';
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    /*Change the values because of the nature of the strings*/
    c = a - 1;
    d = b - 1;
	/*Check that the value chosen is 1-3*/
	if((a>=4 || a<=0) || (b>=4 || b<=0)) {
		std::cout << "That is not a valid value\n";
		}
	else {
      /* For x player*/
      if (e % 2 == 1){
      /*Checking if there´s already a value in that space*/
        if (board[c][d] == " "){
         board[c][d] = "x";
        }
        else {
          std::cout << "Space already chosen\n";
          /*Go back to the start of the loop but with the same value of e */
          e--;
        }
        e++;
      }
        /*For o player*/ 
      else{
        /*Checking if there´s already a value in that space*/
        if (board[c][d] == " "){
          board[c][d] = "o";
        }
        else {
          std::cout << "Space already chosen\n";
          /*Go back to the start of the loop but with the same value of e */
          e--;
        }
        e++;
      }
	}
    /* To check if any player has won*/
    if (((board[0][0] == "x") && (board[0][1] == "x") && (board[0][2] == "x")) || ((board[1][0] == "x") && (board[1][1] == "x") && (board[1][2] == "x")) || ((board[2][0] == "x") && (board[2][1] == "x") && (board[2][2] == "x")) || ((board[0][0] == "x") && (board[1][0] == "x") && (board[2][0] == "x")) || ((board[0][1] == "x") && (board[1][1] == "x") && (board[2][1] == "x")) || ((board[0][2] == "x") && (board[1][2] == "x") && (board[2][2] == "x")) || ((board[0][0] == "x") && (board[1][1] == "x") && (board[2][2] == "x")) || ((board[0][2] == "x") && (board[1][1] == "x") && (board[2][0] == "x")) || ((board[0][0] == "o") && (board[0][1] == "o") && (board[0][2] == "o")) || ((board[1][0] == "o") && (board[1][1] == "o") && (board[1][2] == "o")) || ((board[2][0] == "o") && (board[2][1] == "o") && (board[2][2] == "o")) || ((board[0][0] == "o") && (board[1][0] == "o") && (board[2][0] == "o")) || ((board[0][1] == "o") && (board[1][1] == "o") && (board[2][1] == "o")) || ((board[0][2] == "o") && (board[1][2] == "o") && (board[2][2] == "o")) || ((board[0][0] == "o") && (board[1][1] == "o") && (board[2][2] == "o")) || ((board[0][2] == "o") && (board[1][1] == "o") && (board[2][0] == "o"))){
      std::cout << "You win!";
      break;
    }
	
	if (e == 9){
	std::cout << "Tie";
		/*Print the board*/
	std::cout << "--------\n" << board[0][0] << " |" << board[0][1] << " |"<< board[0][2] << "\n" << board[1][0] << " |" << board[1][1] << " |" << board[1][2] << "\n" << board[2][0] << " |" << board[2][1] << " |" << board[2][2] << "\n" << "--------\n";
  }
}
}