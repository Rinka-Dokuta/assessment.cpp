#include<iostream>
using namespace std;
int main() {

	char input;
	char input2;

	cout << "Do you like platformers or shooter games? P/S" << endl;
	cin >> input;
	cout << "Do you like the badguys to be aliens or mushrooms? A/M" << endl;
	cin >> input2;

	if (input == 'P') {
		if (input2 == 'A')
			cout << "I suggest you try Metroid!" << endl;
		else if (input2 == 'M')
			cout << "I suggest you try Mario Bros!" << endl;
	}
	else if (input == 'S')
		if (input2 == 'A')
			cout << "I suggest you try Halo!" << endl;
		else if (input2 == 'M')
			cout << "I suggest you try The last of us!" << endl;
}
