#include <DataReforged.h>
#include <iostream>


#define print(x) std::cout << x << std::endl

using namespace DataReforged;

int main()
{
	Test();

	ArrayList<int> a(1);

	for (int i = 1; i < 10; i++)
	{
		a.push(i);
	}

	for (int i = 0; i < 10; i++)
	{
		print(a.get(i));
	}

	return 0;
}