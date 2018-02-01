#include <iostream>

using namespace std;

int main(){
	int first_number = 0;
	int second_number = 0;
	char action;
	bool keep_running = true;
	
	// While keeps program running as long as bool keep_running remains true
	while (keep_running){
		// request for first and second numbers
		cout << "Please enter your first number: " << endl;
		cin >> first_number;
		cout << "Please enter your second number: " << endl;
		cin >> second_number;
		// Request for what action to take
		cout << "What action would you like to perform? Please enter either + or *: " << endl;
		cin >> action;
		
		// If statements for each possible action
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