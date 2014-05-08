// Cory Jackson
// CSPC 120 
// May 8,2014

#include <iostream>
using namespace std;

int main()
{
	char player = '&';
	const int rows = 24;
	const int columns = 80;
	int playerRow = 0;
	int playerColumn = 0;
	char input;
	char board [rows][columns + 1] = {


 "******** ==== *********************************************  &  ****************" ,
 "********                 ****************    **************    ***             *" ,
 "*********************    ***                            ***    *************   *" ,
 "***                      ***    *********************   ***    *************   *" ,
 "**    **********************    **********              ***    *************   *" ,
 "**    **********************    **********   **************    *************   *" ,
 "**                              **********                                     *" ,
 "*******************     *********************************************    *******" ,
 "*******************     *********************************************    *******" ,
 "***                     **                                 **********    *******" ,
 "*** ~~~~~~~~~~~~~~~~~~~ **    *************************    **********    *******" ,
 "*** ~~~~~~~~~~~~~~~~~~~ **    *************************    **********    *******" ,
 "**************************    ********               **                        *" ,
 "*                             ******** ~~~~~~~~~~~~~ ****************    *******" ,
 "*    *********************    ******** ~~~~~~~~~~~~~ ******                    *" ,
 "*    *********************    ********               ******    *************   *" ,
 "*                       **    ********    *****************    ******          *" ,
 "****     ***********    **                *****************    ******    ****  *" ,
 "*                  *    ********************                   ******    ****  *" ,
 "***************    *    ********************      *******************    ****  *" ,
 "*                  *                              ~~~~~~~~~~~~    ***          *" ,
 "*    ***************   *********************      ~~~~~~~~~~~~    ***          *" ,
 "*                  *                       *      ~~~~~~~~~~~~    **********   *" ,
 "************** = *********************************************************** = *" ,

} ;

	cout << "Press W to go UP" << endl;
	cout << "Press S to go DOWN" << endl;
	cout << "Press A to go LEFT" << endl;
	cout << "Press D to go RIGHT" << endl;

	while (1)
	{

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns + 1; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < columns + 1; j++)
		{
			if(board[i][j] == '&')
			{
				playerRow = i;
				playerColumn = j;
			}
		}
	}
	cout << playerRow << ' ' << playerColumn << endl;

	cout << "Please type in an input: ";
	cin >> input;
	cout << endl;

	if(input == 'Q' || input == 'q')
	{
		cout << "You have quit the game." << endl;
		break;
	}

	else if(input == 'W' || input == 'w')
	{ 
		if(board[playerRow-1][playerColumn] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow-1][playerColumn] = '&';
		    cout << "You moved up.";
		}

		else if(board[playerRow-1][playerColumn] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow-1][playerColumn] = '&';
			cout << "You won. =)" << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else if(input == 'S' || input == 's')
	{
		if(board[playerRow+1][playerColumn] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow+1][playerColumn] = '&';
		    cout << "You moved down.";
		}

		else if(board[playerRow+1][playerColumn] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow+1][playerColumn] = '&';
			cout << "You won. =)" << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else if(input == 'A' || input == 'a')
	{
		if(board[playerRow][playerColumn-1] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn-1] = '&';
		    cout << "You moved left.";
		}

		else if(board[playerRow][playerColumn-1] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn-1] = '&';
			cout << "You won. =)." << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else if(input == 'D' || input == 'd')
	{
		if(board[playerRow][playerColumn+1] == ' ')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn+1] = '&';
		    cout << "You moved right.";
		}

		else if(board[playerRow][playerColumn+1] == '=')
		{
			board[playerRow][playerColumn] = ' ';
			board[playerRow][playerColumn+1] = '&';
			cout << "You won. =)" << endl;
			break;
		}

		else
			cout << "YOU CAN'T DO THAT!";
	}

	else
		cout << "Incorrect character. Please try again.";

	cout << endl << endl;

	}



	system ("pause");
	return 0;
}
