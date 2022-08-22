#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main( ){
	int amount;
	cout << "Enter amount to play with : ";
	cin >> amount;
	cout << "\nThe amount entered is : " << amount;
	string confirm;
	cout << "\nPlease type 'true' to confirm the amount is correct : ";
	cin >> confirm;

	char difficulty;
	if(confirm == "true"){
		cout << "\nPlease choose a difficulty 'E', 'M' or 'H' : ";
		cin >> difficulty;
		if (difficulty == 'E'){
				cout << "\nYou have chosen easy mode.";
				int y(1);
				while (amount>=1500 && y==1){
					char random;
					srand(time(0));
					random = (rand() % 9) + 1;
					int entrance;
					cout << "\nPlease enter a random number between 1 and 10 (excluding 10) : ";
					cin >> entrance;
					if (entrance == random){
						amount = amount*1.5;
						cout << "\nThe amount is : " << amount;
					}else{
						amount = amount - 200;
						cout << "\nThe amount is : " << amount;
					}
					cout << "\nEnter '1' to continue : ";
					cin >> y;
				}
			if (y != 1){
			cout << "\nYou have chosen to end game and your balance is : " << amount;
			exit;
			}else{
				cout << "\nYou have insufficient funds please deposit at least 1500.";
			}
		}else if(difficulty == 'M'){
				cout << "\nYou have chosen medium mode.";
				int z(1);
				while (amount>=5000 && z==1){
					char random1;
					srand(time(0));
					random1 = (rand() % 25) + 1;
					int entrance1;
					cout << "\nPlease enter a random number between 1 and 25 : ";
					cin >> entrance1;
					if (entrance1 == random1){
						amount = amount*3;
						cout << "\nThe amount is : " << amount;
					}else{
						amount = amount - 500;
						cout << "\nThe amount is : " << amount;
					}
					cout << "\nEnter '1' to continue : ";
					cin >> z;
				}
			if (z != 1){
			cout << "\nYou have chosen to end game and your balance is : " << amount;
			exit;
			}else{
				cout << "\nYou have insufficient funds please deposit at least 5000.";
			}
		}else if(difficulty == 'H'){
				cout << "\nYou have chosen hard mode";
				int w(1);
				while (amount>=10000 && w==1){
					char random2;
					srand(time(0));
					random2 = (rand() % 50) + 1;
					int entrance2;
					cout << "\nPlease enter a random number between 1 and 50  : ";
					cin >> entrance2;
					if (entrance2 == random2){
						amount = amount*5;
						cout << "\nThe amount is : " << amount;
					}else{
						amount = amount - 700;
						cout << "\nThe amount is : " << amount;
					}
					cout << "\nEnter '1' to continue : ";
					cin >> w;
				}
			if (w != 1){
			cout << "\nYou have chosen to end game and your balance is : " << amount;
			exit;
			}else{
				cout << "\nYou have insufficient funds please deposit at least 10000.";
			}
		}else{
			cout << "The mode you have chosen an invalid mode.";
			exit;
		}
	}else{
	cout << "The amount or confirmation is invalid Please Try again";
	exit;
	}
}
