#include <iostream>
using namespace std;

bool isPermutation(char *a, char *b){
	int lena = strlen(a), lenb = strlen(b);
	int freq[26] = {}; // All buckets value zero
	for (int i = 0; i < lena; ++i)
	{
		int index = a[i] - 'a';
		freq[index]++;
	}

	for (int i = 0; i < lenb; ++i)
	{
		int index = b[i] - 'a';
		freq[index]--;
	}
	
	for (int i = 0; i < 26; ++i)
	{
		if(freq[i] != 0){
			return false;
		}
	}

	return true;
}

int main(){

	char a[] = "abccdab";
	char b[] = "ccbabad";


	if(isPermutation(a,b) == true){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}


	return 0;
}
















