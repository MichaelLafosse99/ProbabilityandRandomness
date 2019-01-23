#include "MontyHallTest.h"
#include <string>
#include <cmath>

MontyHallTest::MontyHallTest()
{
	totalTests = 0;
	correctStayed = 0;
	correctSwitched = 0;

	for(int i :choices )
	{
		choices[i] = i + 1;
	}

	percentageSwitchedCorrect = .0f;
	percentageStayedCorrect = .0f;

}

void MontyHallTest::PerformTest(int num)
{
	totalTests = num;
}

char* MontyHallTest::getCorrectSwitched()
{
	std::string switchedString = std::to_string(correctSwitched);

	char* chrPtr = &switchedString[0];

	return chrPtr;
}

char* MontyHallTest::getCorrectStayed()
{
	std::string stayedString = std::to_string(correctStayed);

	char* chrPtr = &stayedString[0];

	return chrPtr;
}
