#include <iostream>
using namespace std;

void printTable(int init, int fval, int step){
	int far = init, cel;

	while(far <= fval){
		cel = 5 * (far - 32) / 9;
		cout << far << " " << cel << endl;

		far = far + step;
	}
}

int main(){
	int init, fval, step;

	cin>>init>>fval>>step;

	printTable(init, fval, step);
	printTable(0, 400, 80);
	

	return 0;
}
















