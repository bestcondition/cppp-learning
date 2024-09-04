# include <iostream>
int main()
{
	int left=0,right=0;
	std::cout << "input a range, e.g. 10 21 or 10 100" << std::endl;
	std::cin >> left >> right;
	std::cout << "the range from "<<left<<" to "<< right << " has the following numbers." << std::endl;
	while (left<=right)
	{
		std::cout << left << std::endl;
		++left;
	}
	return 0;


}
