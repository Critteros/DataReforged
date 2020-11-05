#include <DataReforged.h>
#include <iostream>


#define print(x) std::cout << x << std::endl


int main()
{
	DataReforged::Test();
	DataReforged::ArrayList<int> a(10);
	print(a.size());
	return 0;
}