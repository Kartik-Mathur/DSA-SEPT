#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){	

	char a[] = "Coding";
	int k;
	cin>>k;

	int len = strlen(a);

	k%=len;

	reverse(a, a+len);
	reverse(a, a+k);
	reverse(a+k, a+len);

	cout << a << endl;

	return 0;
}
















