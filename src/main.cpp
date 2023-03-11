#include <iostream>
using namespace std;

#include "includes/KeySign.cpp"
#include "includes/Menu.cpp"

int main()
{
	int key = keySign();
	Menu menu(key);
	menu.init();
	return 0;
}
