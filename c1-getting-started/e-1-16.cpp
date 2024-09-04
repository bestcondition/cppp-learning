# include <iostream>
int main()
{
	int sum=0,val=0;
	// when using cin as a condition, it evaluates to false if it reaches the end of file or encounters an error.
	// in unix, end of file is ctrl+d
	// typical error is input lette
	while (std::cin >> val)
		sum+=val;
	std::cout << "the sum of input set is " <<  sum<<std::endl;
	return 0;

}
