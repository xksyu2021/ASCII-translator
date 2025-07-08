#include <iostream>

//define BEGIN
void Log(std::string message);
void Alpha();
void Beta();
//define END

int main()
{
	for ( ; ; )
	{
		int type;
		Log("type in 1:ASCII to characters\ntype in 2:characters to ASCII");
		std::cin >> type;
		if (type == 1)
			Alpha();
		else if (type == 2)
			Beta();
		else
			Log("You typed an undefined number.");
	}
}