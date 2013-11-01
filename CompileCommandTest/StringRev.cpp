#include <iostream>
#include "StringRev.h"

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Reversed arg:" << endl;
	if (argc > 1)
	{
		cout << strrev(argv[1]) << endl;
	}
	else
	{
		cout << "string argument required" << endl;
	}
	return 0;
}

char* strrev(char* s)
{
	char c;
	char* s0 = s-1;
	char* s1 = s;

	//end of string
	while (*s1) ++s1;

	//reversing
	while (s1-- > ++s0)
	{
		c = *s0;
		*s0 = *s1;
		*s1 = c;
	}
	return s;
}
