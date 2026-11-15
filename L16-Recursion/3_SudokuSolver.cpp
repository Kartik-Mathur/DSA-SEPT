#include <iostream>
using namespace std;

bool isSafe(int mat[][9],int i,int j,int n, int number){
	// row mei and col mei nhi hona chahiye number
	for (int k = 0; k < n ; ++k)
	{
		if(mat[i][k] == number or mat[k][j] == number){
			return false;
		}
	}

	int sqrt_n = sqrt(n);
	// box mei nhi hona chahiye
	int si = (i/sqrt_n)*sqrt_n;
	int sj = (j/sqrt_n)*sqrt_n;

	for (int i = si; i < si + sqrt_n; ++i)
	{
		for (int j = sj; j < sj+sqrt_n; ++j)
		{
			if(mat[i][j] == number){
				return false;
			}
		}
	}

	return true;
}

bool sudoku(int mat[][9],int i,int j,int n){
	// base case
	if(i == n){
		// Print sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n ; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		return true; // ho gaya sab toh true kardo return
	}

	// recursive case
	// agar col khatam ho gaye toh kya karna h
	if(j == n){
		return sudoku(mat, i+1, 0, n); // next row and 0th col par chle jaao
	}
	
	// already filled cell par kya karna h
	if(mat[i][j] != 0){
		return sudoku(mat, i, j+1, n);
	}
	// Empty cell ka kaam yaha krenga
	for (int number = 1; number <= n ; ++number)
	{
		// Pehle check karo number current i,j par rakhna safe h?
		if(isSafe(mat, i, j, n, number) == true){
			mat[i][j] = number; // rakhdo if it's safe to keep

			// Baaki empty cells recursion ko bolo fill karke bataye
			bool kyaSolveHua = sudoku(mat,i,j+1,n);
			if(kyaSolveHua == true){
				return true;
			}

			mat[i][j] = 0; // backtracking
		}
	}

	return false; // current empty cell cant be solved
}

int main(){
	int mat[9][9]=
	{{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}};

	sudoku(mat, 0, 0, 9);

	return 0;
}
















