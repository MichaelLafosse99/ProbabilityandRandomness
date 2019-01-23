#include "MontyHallTest.h"
#include <string>
#include <cmath>

MontyHallTest::MontyHallTest()
{
	totalTests = 0;
	correctStayed = 0;
	correctSwitched = 0;

	//for each loop, that assigns choices at index i, the value of i + 1

	for(int i :choices )
	{
		choices[i] = i + 1;
	}

	correctSwitchedPercentage = .0f;
	correctStayedPercentage = .0f;

}

void MontyHallTest::PerformTest()
{
  
  	for (int i = 0; i < 5; i++)
	{
		SwitchTest();
	}
	
}

void MontyHallTest::stayedTest()
{
	srand(0);

	int correctChoice = 1;

	totalTests = 10;

	int choiceTwo = rand() % 3;

	if(choiceTwo != correctChoice)
	{
		totalTests++;
	}
	else
	{
		correctStayed++;
	}
}

void MontyHallTest::SwitchTest()
{
	int choiceOne = rand() % 3;

	int reChoice;

	do
	{

		reChoice = rand() % 2;

	} while (reChoice != choiceOne);

	if (reChoice == correctChoice)
		correctSwitched++;

	totalTests++;

	correctSwitchedPercentage = correctSwitched / totalTests;
}

char* MontyHallTest::getCorrectSwitched()
{
	std::string switchedString = std::to_string(correctSwitched);

	char* chrPtr = &switchedString[0];

	correctSwitchedPercentage = .0f;
	correctStayedPercentage = .0f;
}

char* MontyHallTest::GetCorrectStayedPercent()
{
	std::string stayedString = std::to_string(correctStayedPercentage);

	char* chrPtr = &stayedString[0];


	return chrPtr;
}

char* MontyHallTest::getCorrectStayed()
{
	std::string stayedString = std::to_string(correctStayed);

	char* chrPtr = &stayedString[0];
}

char* MontyHallTest::GetCorrectSwitchedPercent()
{
	std::string switchedString = std::to_string(correctSwitchedPercentage);

	char* chrPtr = &switchedString[0];

	return chrPtr;
}

char* MontyHallTest::GetTotalTests()
{
	std::string totalString = std::to_string(totalTests);

	char* chrPtr = &totalString[0];

	return chrPtr;
}
