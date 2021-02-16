# ifndef BOARD_H
# define BOARD_H

# include <iostream>
# include <string>

using namespace std;

class Board
{
private:
	char theBoard[2][6]; 

public:
	Board(); //default constructor without parameter 
	void displayBoard() const;  
	char getOwner(int row,int column);
	void setOwner(int row, int column, char P);
	bool isFull() const;
	int countOwnedCells(char P);

};
#endif