#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (size_t i = 1; argv[i]; i++)
		{
			for (size_t j = 0; argv[i][j]; j++)
			{
				cout << (char)toupper(argv[i][j]);
			}
		}
		cout << endl;
	}
	return (0);
}