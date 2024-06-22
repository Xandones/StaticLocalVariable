#include <iostream>

int CallsMeter()
{
	static int FunctionCallsNumber = 0; 
	/* 
	* A variable declared as static will remain in the memory during all runtime.
	* Its scope remains the same. This helps to reuse a variable value. 
	*/
	FunctionCallsNumber++;
	return FunctionCallsNumber;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", CallsMeter());
		/* 
		* The function CallsMeter is called five times inside this for loop.
		* If the variable used inside this function weren't static, this loop would show 
		* 1 five times instead of showing the numbers 1 until 5.
		*/
	}
}