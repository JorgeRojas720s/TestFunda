
#include <iostream>

int main()
{

	int array[] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		if (array[i] % 2 == 0) {
			std::cout << "Es par";
		}
		else {
			std::cout << "Es impar";
		}
	}



	return 0;
}

