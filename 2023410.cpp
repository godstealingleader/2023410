#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	long long word_pop = 0, US_pop = 0;
	cout << "Enter the world's population:";cin >> word_pop;
	cout << "Enter the population of the US:";cin >> US_pop;
	double percent = (double)US_pop / (double)word_pop;
	cout << "The populationof the US is " << percent*100 << "% of the world population";
	return 0;
}