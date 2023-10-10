#include <iostream>
#include <cstdlib>
#include <vector>
/* menu will be showcased to user infinitely until he presses q (the program will exit)
 user has an empty list , he can add a number to the list and do various other commands*/
using namespace std;

int main(){
	
	char choice;
	vector <int> list {};
	while(true){
		cout << endl;
	cout << "P - print numbers\nA - Add a number\nM - display mean of the numbers\nS - display the smallest number\nL - display the largest number\nQ - quit" << endl;
	cout << "Enter your choice: ";
	cin >> choice ;
	
	
		if(choice == 'P' || choice == 'p'){
			if(list.size() !=0){
			for(auto c : list){
				cout << c << endl;
			}
			}
			else {cout <<"the list is empty!!";}
		}
		else if(choice == 'A' || choice == 'a'){
			int add {};
		cout << "Enter a new integer to add to the list: ";
		cin >> add;
		list.push_back(add);
			for(auto c : list){
				cout << c << endl;
			}
			
		}
		else if(choice == 'M' || choice == 'm'){
			if(list.size() != 0){
			double average {0};
			for(auto c : list){
				average += (c/static_cast<double>(list.size()));
			}
			cout << average;
			}
			
			else {cout << "List is empty cannot count the average!!";}
		}
		else if(choice == 'S' || choice == 's'){
			if(list.size() != 0){
			int smallest {list.at(0)};
			for(size_t i=0 ; i<list.size(); i++){
				if(list.at(i)<smallest){
					smallest=list.at(i);
				}
			}
			cout << smallest;
			}
			
			else{cout << "List is empty, cannot find smallest number!!";}
		}
		else if(choice == 'L' || choice == 'l'){
			if(list.size() != 0){
			int largest {list.at(4)};
			for(size_t i; i<list.size();i++){
				if(largest>list.at(i)){
					largest = list.at(i);
				}
				cout << largest;
			}
			
			}
			else {cout << "List is empty cannot find the largest number!";}
		}
		else if(choice == 'Q' || choice == 'q'){
			cout << "You quit. Goodbye...";
			exit(0);
			}
		else {cout << "Unknown selection, please try again!";}
}
	return 0;
}