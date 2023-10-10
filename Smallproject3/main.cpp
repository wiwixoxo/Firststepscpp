#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*User enters a string(preferably a word not a sentence) , program must return a pyramid
 for example is user enters WOW program must show
  w
 wow
wowow */
int main(){
	string pyramid {};
	cout << "Welcome! Enter a word to see a magic trick!!" << endl;
	cout << "Entry: ";
	getline(cin, pyramid);
	 
	 
	for (size_t i = 0; i < pyramid.size(); i++) {
        cout << string(pyramid.size() - i - 1, ' '); // Print leading spaces
        cout << pyramid.substr(0, i + 1); // Print the characters
        if (i > 0) {
            cout << pyramid.substr(0, i); // Print the characters in reverse order
        }
        cout << endl;
    }
	return 0;
}