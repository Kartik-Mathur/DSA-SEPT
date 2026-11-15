#include <iostream>
using namespace std;

bool isSafe(int board[][10],int row, int col, int n){
	// Check col
	for (int k = 0; k < row ; ++k)
	{
		if(board[k][col] == 1){
			return false;
		}
	}

	// Check upper right diagonal
	int r = row, c = col;
	while(r>=0 and c < n){
		if(board[r][c] == 1){
			return false;
		}

		r--;
		c++;
	}

	// Check upper left diagonal
	r = row;
	c = col;
	while(r>=0 and c >=0){
		if(board[r][c] == 1){
			return false;
		}

		r--;
		c--;
	}


	return true;
}

bool nQueen(int board[][10],int row, int n){
	// base case
	if(row == n){
		// Print the board

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n ; ++j)
			{
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;		
		// return true;
		return false;// Fool the recursion, answer milne par bhi bol diya nhi milla
	}

	// recursive case
	// Ek row ka kaam hume karna hai -> n-1 queens ka kaam recursion karega
	for (int col = 0; col < n ; ++col)
	{
		if(isSafe(board, row, col, n) == true){
			board[row][col] = 1; // Place kardo queen

			bool kyaBakiBaatBani = nQueen(board, row+1, n); 
			if(kyaBakiBaatBani == true){
				return true;
			}

			board[row][col] = 0; // Backtrack
		}	
	}

	// Agar upar kisi bhi col mei queen nhi rakhi gai toh return false krenge
	return false;
}

int main(){

	int board[10][10] = {};

	int n;
	cin>>n;
	nQueen(board,0,n);

	return 0;
}
















