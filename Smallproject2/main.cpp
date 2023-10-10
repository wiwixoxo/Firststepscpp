#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
/* USERS ENTERS A SECRET MESSAGE , THE MESSAGE WILL BE ENCRYPTED WITH A SUBSTITUTION CIPHER 
 * for example if user enters: "I love you" it will be encrypted to "r OLEV BLF "
 * alphabet will be encrypted to keys ;
 * using c++ strings
 * we also deencrypt the message in the end
 */
int main(){
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
	string key      {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba "};
	
	string message {};
	
	cout << "Enter your secret message: ";
	getline(cin, message);
	cout << endl;
	cout << "Please wait encrypting message..."<<endl;
   cout << endl;
   string encrypted_message {};
   
   for(auto c: message){
	   size_t index = alphabet.find(c);
	   if(index != string::npos){
	   encrypted_message += key[index];
	   
   }else{encrypted_message += c;}
   }
   
   cout << "Your encrypted message is: " << encrypted_message << endl;
   cout << endl;
   
   cout << "deencrypting message..."<< endl;
   
   cout << endl;
   string deecrypted_message {};
   for(auto c : encrypted_message){
	   size_t index = key.find(c);
	   if(index != string::npos){
	   deecrypted_message += alphabet[index];}
	   else {deecrypted_message +=c;}
   }
   
   cout << deecrypted_message << endl;
	return 0;
}
