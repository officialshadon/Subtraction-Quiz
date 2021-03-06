#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// Generate two random numbers

	int correct;
	int answer;
	// Let's put it in a loop
	int numOfTimes;
	cout << "How many tests will you like to try?" << '\n';
	cin >> numOfTimes;
	for ( int i = 0; i < numOfTimes; ++i ){
		srand(time(0));			 // Makes sure the seed is never the same
		int num1, num2;
		num1 = rand() % 11; 	// make sure the number is between 0 and 10...inclusive
		num2 = rand() % 11;
		if ( num1 >= num2){
			cout << "What is " << num1 << " - "<< num2 << '?' << '\n';
			cin >> answer;	
			correct = num1 - num2;
		}else{
			cout << "What is " << num2 << " - " << num1 << '?' << '\n';
			cin >> answer;
			correct = num2 - num1;
		}
		if (answer == correct){
			cout << "Good job, you got it right" << '\n';
		} else{
			cout << "You didn't quite get it right but good job still!!" << '\n';
		}
	}
	return 0;
}
