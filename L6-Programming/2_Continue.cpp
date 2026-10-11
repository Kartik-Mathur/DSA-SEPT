#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int i = 1; 
	while(i <= 5){
		
		if(i == 3){
			i++;
			continue;
		}

		cout << i << " ";

		i++;
	}

	return 0;
}
















