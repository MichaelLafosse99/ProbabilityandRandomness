#pragma once
#include <iostream>

class MontyHallTest
{
public:

	MontyHallTest();

	void PerformTest();


	void StayedTest();

	void SwitchTest();


	char* getCorrectSwitched();
	char* getCorrectStayed();

	char* GetCorrectStayedPercent();
	char* GetCorrectSwitchedPercent();

	char* GetTotalTests();

private:

	int totalTests;

	int correctSwitched;
	int correctStayed;
  
	int choices[3];

	float correctStayedPercentage;
	float correctSwitchedPercentage;

};