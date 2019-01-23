#pragma once
#include <iostream>

class MontyHallTest
{
public:

	MontyHallTest();

	void PerformTest(int);

	char* getCorrectSwitched();
	char* getCorrectStayed();

private:

	int totalTests;

	int correctSwitched;
	int correctStayed;
  
	char choices[3];

	float percentageStayedCorrect;
	float percentageSwitchedCorrect;

};