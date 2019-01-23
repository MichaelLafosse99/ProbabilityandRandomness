#pragma once
#include <cmath>
#include <iostream>

class MontyHallTest
{

public:

	void PerformTest(int);

private:

	int totalTests;

	int correctSwitched;
	int correctStayed;
};