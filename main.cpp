#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	clock_t tStart = clock();  // start timer for main function

	cout << "Hello";
	cout << " World!\n\n";

	// Print the execution time and wait for a char to exit the program
	printf("Time taken: %.3fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

	_getche();
	return 0;
}