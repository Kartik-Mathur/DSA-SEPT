#include <iostream>
using namespace std;

int main(){

	int a;
	char arr[1000];
	
	cin>>a;

	cin.get(); // read kia character but store nahi kia thus ignore ho gaya
	// cin.ignore(); // number ke baad ek character ko ignore kar dega

	cin.getline(arr,1000);


	cout << "Number : "<<a<<endl;
	cout << "String : "<<arr<<endl;

	return 0;
}
















