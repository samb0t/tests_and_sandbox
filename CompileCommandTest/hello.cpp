#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello people. arg:" << endl;
	if (argc > 1)
	{
		cout << argv[1] << endl;
	}
	else
	{
		cout << "no args brah" << endl;
	}
	return 0;
}
