#include<iostream>

using namespace std;
//For write the numbers in the secreen
char matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int nom;//this for count the number of the input for the player
void printmatrix()
{
	system("cls");    //system clear
	cout << "\t\t\t\t   ********  Welcome To Tec Tac Toe Game  ********\n\n";
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			//For write space bettwen the numbers 
			cout << "          " << matrix[i][j] << "       ";
		}
		//For write 3 new lines bettwen thr numbers
		cout <<"\n\n\n";
	}
}

//this funiction for input the chooise that the player will choose the 1 for X and 2 for O
void Inplay() 
{
	int pos;
	cout << "\t It Is  ( "<< player << " ) Turn .....\n"  <<"\tChoose Your Position Player ( " << player << " )";
	cin >> pos;

	if (pos == 1)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "\t\t Failed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}
	else if (pos == 2)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}
		
	else if (pos == 3)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}
	
	else if (pos == 4)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs

		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}

	else if (pos == 5)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs

		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}

	else if (pos == 6)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}

	else if (pos == 7)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}

	else if (pos == 8)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}

	else if (pos == 9)
	{
		//this one if the filed is in use the program will tell u and it will return thr input with out los the old inputs
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "\t\t Filed Is Already In Use Please Try Again \n";
			Inplay();
		}
	}

}

void ToPlayer()
{
	if (player == 'X')
		player = 'O';
	
	else
		player = 'X';

}
char whowin()
{
	//Player 'X'

	if (matrix[0][0] == 'X' &&matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' &&matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	 if (matrix[2][0] == 'X' &&matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	


	if (matrix[0][0] == 'X' &&matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	 if (matrix[0][1] == 'X' &&matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	 if (matrix[0][2] == 'X' &&matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';


	 if (matrix[0][0] == 'X' &&matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	 if (matrix[2][0] == 'X' &&matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';


	//Player 'O'

	 if (matrix[0][0] == 'O' &&matrix[0][1] == 'O' && matrix[0][2] == 'O')
		 return 'O';
	 if (matrix[1][0] == 'O' &&matrix[1][1] == 'O' && matrix[1][2] == 'O')
		 return 'O';
	 if (matrix[2][0] == 'O' &&matrix[2][1] == 'O' && matrix[2][2] == 'O')
		 return 'O';


	 if (matrix[0][0] == 'O' &&matrix[1][0] == 'O' && matrix[2][0] == 'O')
		 return 'O';
	 if (matrix[0][1] == 'O' &&matrix[1][1] == 'O' && matrix[2][1] == 'O')
		 return 'O';
	 if (matrix[0][2] == 'O' &&matrix[1][2] == 'O' && matrix[2][2] == 'O')
		 return 'O';


	 if (matrix[0][0] == 'O' &&matrix[1][1] == 'O' && matrix[2][2] == 'O')
		 return 'O';
	 if (matrix[2][0] == 'O' &&matrix[1][1] == 'O' && matrix[0][2] == 'O')
		 return 'O';

	 return '/';
}

int main()
{
	nom = 0;
	printmatrix();
	while (1)
	{
		nom ++;
		Inplay();
		printmatrix();
		if (whowin() == 'X')
		{
			cout << " \t Player \"X\" Is The Winner ! \n";
			break;
		}
		else if (whowin() == 'O')
		{
			cout << " \t Player \"O\" Is The Winner ! \n";
			break;
		}
		else if (whowin() == '/' && nom == 9)
		{
			cout << " \t It Is A Draw !!! \n";
			break;
		}

		ToPlayer();
	}
	system("pause");
	return 0;

}