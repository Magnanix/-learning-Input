
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 1		//Define this to not fail compile 11/10 times, why is this needed at all.
#include "../../std_lib_facilities.h"		//Library material from Bjarne Stroustrup Programming second edition

int main()		//Start of main program
{
	cout << "Please enter your first name (followed by 'enter'):\n";		//Character Output Stream, identifies input of USERs name
	string first_name;		//String save for USERs name
	cin >> first_name;		//What is this, I have no idea, send halp.
	cout << "Your first name" << " is " << first_name << "?\n" << "Hello, " << first_name << "!\n";		//Multiple Character Output Streams on a single line instead of repetative multi line outputs, don't mind either way since learning but apparently it's good practice to never start multiple line outputs. Ok then.
	keep_window_open();		//Keeps the damn window open because Windows Code is rubish, this shouldn't be needed but whatever, can understand why if I think broadly.

}