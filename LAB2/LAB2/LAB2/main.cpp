#include <iostream>
#include <string>
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
	string name1 = "Kristine Cheng";
	hello1Function(name1);

	string name2 = "Nicholas Hu";
	hello2Function(name2);

	return 0;
}

