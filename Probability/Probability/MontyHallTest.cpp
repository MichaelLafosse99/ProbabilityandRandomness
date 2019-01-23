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

void MontyHallTest::PerformTest(int)
{

}

char* MontyHallTest::GetCorrectStayedPercent()
{
	std::string stayedString = std::to_string(correctStayedPercentage);

	char* chrPtr = &stayedString[0];

	return chrPtr;
}

char* MontyHallTest::GetCorrectSwitchedPercent()
{
	std::string switchedString = std::to_string(correctSwitchedPercentage);

	char* chrPtr = &switchedString[0];

	return chrPtr;
}
