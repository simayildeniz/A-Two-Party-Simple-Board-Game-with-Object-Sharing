# include <iostream>
# include <vector>
# include <string>
# include "Player.h"
# include "Board.h"

using namespace std;

Board::Board()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			theBoard[i][j] = '-';
		}
	}
}

void Board::displayBoard() const
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << theBoard[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

char Board::getOwner(int row,int column)
{
	char result = (*this).theBoard[row][column];
	return result;
}

void Board::setOwner(int row, int column, char P)
{
	if ((*this).theBoard[row][column] == '-')
	{
		(*this).theBoard[row][column] = P;
	}
	else
	{
		return;
	}
}

bool Board::isFull() const
{
	int counter = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if ((*this).theBoard[i][j] == 'A' || (*this).theBoard[i][j] == 'B')
			{
				counter++;
			}
		}
	}
	if (counter == 12)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Board::countOwnedCells(char P)
{
	int counter = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if ((*this).theBoard[i][j] == P)
			{
				counter++;
			}
		}
	}
	return counter;
}