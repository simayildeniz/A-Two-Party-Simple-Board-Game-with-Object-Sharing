# include <iostream>
# include <vector>
# include <string>
# include "Player.h"
# include "Board.h"

using namespace std;

//default constructor:
Player::Player (Board &myBoard,char x, int Direction)
	: board(myBoard), id(x), direction(Direction)
{ 
	rowCoord = 0;
	colCoord = 0;
}

void Player::move(int num)
{
	for (int i = 0; i < num; i++)
	{
		if ((*this).direction == 1)
		{
			if ((*this).rowCoord == 0)
			{
				if ((*this).colCoord < 5)
				{
					(*this).colCoord = (*this).colCoord + 1;
				}
				else
				{
					(*this).rowCoord = (*this).rowCoord + 1;
				}
			}
			else
			{
				if ((*this).colCoord > 0)
				{
					(*this).colCoord = (*this).colCoord - 1;
				}
				else
				{
					(*this).rowCoord = (*this).rowCoord - 1;
				}
			}
		}
		else 
		{
			if ((*this).rowCoord == 1)
			{
				if ((*this).colCoord < 5)
				{
					(*this).colCoord = (*this).colCoord + 1;
				}
				else
				{
					(*this).rowCoord = (*this).rowCoord - 1;
				}
			}
			else
			{
				if ((*this).colCoord > 0)
				{
					(*this).colCoord = (*this).colCoord - 1;
				}
				else
				{
					(*this).rowCoord = (*this).rowCoord + 1;
				}
			}
		}
	}
}

void Player::claimOwnership()
{
	int rC = (*this).getRow();
	int cC = (*this).getCol();
	int P = (*this).id;
	if ((*this).board.getOwner(rC,cC) == '-')
	{
		board.setOwner(rC,cC,P);
	}
	else
	{
		return;
	}
}

bool Player::wins()
{
	if ((*this).board.countOwnedCells((*this).id) >= 7)
	{
		return true;
	}
	return false;
}

int Player::getRow()
{
	int result = (*this).rowCoord;
	return result;

}

int Player::getCol()
{
	int result = (*this).colCoord;
	return result;
}