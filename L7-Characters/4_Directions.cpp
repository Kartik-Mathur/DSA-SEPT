#include <iostream>
using namespace std;

int main(){

	int x = 0, y = 0;

	char ch;
	ch = cin.get();
	while(ch != '\n'){
		if(ch == 'N'){
			y++;
		}
		else if(ch == 'S'){
			y--;
		}
		else if(ch == 'E'){
			x++;
		}
		else{
			x--;
		}

		ch = cin.get();
	}

	if(x>=0){
		// Print x times 'E'
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}

	if(y>=0){
		// Print y times 'N'
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}

	if(y<=0){
		// Print |y| times 'S'
		for (int i = 0; i < -y; ++i)
		{
			cout << 'S';
		}
	}

	if(x<=0){
		// Print |x| times 'W'
		for (int i = 0; i < -x; ++i)
		{
			cout << 'W';
		}
	}

	return 0;
}
















