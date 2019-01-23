#pragma once
#include <iostream>

class MontyHallTest
{
public:

	MontyHallTest();

	void PerformTest(int);

	char* GetCorrectStayedPercent();
	char* GetCorrectSwitchedPercent();

private:

	int totalTests;

	int correctSwitched;
	int correctStayed;
  
	int choices[3];

	float correctStayedPercentage;
	float correctSwitchedPercentage;

};