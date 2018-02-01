#include <iostream>

using namespace std;

int main(){
	int first_number = 1;
	int second_number = 1;
	char action;
	bool keep_running = true;
	
	while (keep_running){
		cout << "Please enter your first number: " << endl;
		cin >> first_number;
		cout << "Please enter your second number: " << endl;
		cin >> second_number;
		cout << "What action would you like to perform? Please enter either + or *: " << endl;
		cin >> action;
		
		if (action == '+'){
			cout << "Your answer is: ";
			cout << first_number + second_number << endl;
		}
		if (action == '*'){
			cout << "Your answer is: ";
			cout << first_number * second_number << endl;
		}
		
	}
		
}