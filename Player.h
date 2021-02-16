# ifndef PLAYER_H
# define PLAYER_H
# include "Board.h"
# include<string>
# include <iostream>

using namespace std;

class Player
{
private:
	Board &board;
	char id;
	int direction; // if A --> 1 if B --> 0
	int rowCoord;
	int colCoord;

public:
	Player::Player (Board &myBoard,char x, int Direction);
	void move(int num);
	void claimOwnership();
	bool wins();
	int getRow();
	int getCol();
};
# endif