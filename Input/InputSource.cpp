
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS 1
#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name (followed by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Your first name" << " is " << first_name << "?\n" << "Hello, " << first_name << "!\n";
	keep_window_open();

}