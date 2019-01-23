#pragma once
#include <cmath>
#include <iostream>

class MontyHallTest
{
public:

	void PerformTest(int);

private:

	char choices[3];

	float percentageStayedCorrect;
	float percentageSwitchedCorrect;

};