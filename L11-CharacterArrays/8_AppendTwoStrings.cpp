#include <iostream>
#include <cstring>
using namespace std;

void appendStrings(char *a, char *b){
	int lenb = strlen(b);
	int i = strlen(a);

	for (int j = 0; j <= lenb ; ++j)
	{
		a[i] = b[j];
		i++;
	}
}

int main(){

	char a[100] = "Hello";
	char b[] = "World";

	appendStrings(a,b);
	cout << a << endl;
	return 0;
}
















