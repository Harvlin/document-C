#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
	string buffer [100];
	strcpy(buffer, "Hello ");
	strcat(buffer, "Nela ");
	strcat(buffer, "How ");
	strcat(buffer, "Are ");
	strcat(buffer, "You");
	
	cout << endl << buffer << endl;
	cout << "length of string: " << strlen(buffer) << endl;
	cout << "buffer[10]: " << buffer[10];
	
 	return 0;
}
