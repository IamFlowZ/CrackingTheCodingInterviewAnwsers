// TicTacToe_win.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{

	bool game_won = 0;
	int board[3][3] =
	{
		{1,2, },{2,1, },{ NULL ,2, 1}
	};

	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << endl;
		}
	}*/

	int Switch = 0;

	switch (Switch)
	{
	case 0:
		//check horizontal
		if (/*horizontal*/)
		{
			return game_won = 1;
		}
		else
		{
			Switch++;
			break;
		}
	default:
		break;
	}


	int asdf;
	cin >> asdf;
	cout << asdf;
    return 0;
}

