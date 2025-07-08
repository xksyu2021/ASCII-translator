#include <iostream>
#include <string>

//output
void Log(std::string message)
{
	std::cout << message << std::endl;
}
void Log(int message)
{
	std::cout << message << std::endl;
}
void Log(char message)
{
	std::cout << message << std::endl;
}
void Cont()
{
	Log("Press enter to continue.");
	std::cin.get();
}

//Find & Result for ALPHA
std::string numA;
std::string numB;
int i = 0;
int x, y, z = 0;

void FR()
{
	z = i - 1;
	bool condition = true;
	while (condition)
	{
		if (z != 0 && numA[z] == ',')
		{
			y = z + 1;
			condition = false;
		}
		else if (z == 0)
		{
			y = 0;
			condition = false;
		}
		else
			z--;
	}
	numB = numA.substr(y, x-y+1);
	int numC = std::stoi(numB);
	char ara = numC;
	Log(ara);
}


//function
void Alpha()
{
	Log("type in your ASCII code\nyou can use \",\" to type in a string of codes");
	std::cin >> numA;
	while (i <= (numA.length() - 1))
	{
		if (numA[i] == ',')
		{
			x = i - 1;
			FR();
		}
		else if (i == (numA.length() - 1))
		{
			x = i;
			FR();
		}
		i = i++;
	}
	Cont();
	i = 0;
}

void Beta()
{
	Log("type in your characters");
	std::string araA;
	std::cin >> araA;
	Log("ASCII code");
	for (char araB : araA)
	{
		int num = static_cast<int>(araB);
		Log(num);
	}
	Cont();
	i = 0;
}
