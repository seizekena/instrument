//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
using namespace std;

int main()
{
	struct timespec sCurNanoTimeVal;
	struct timespec sCurNanoTimeVal2;
	int rtn, i;

	for (i = 0; i < 5; i++)
	{
		rtn = clock_gettime(CLOCK_REALTIME, &sCurNanoTimeVal);
		printf("[i:%06d] %ld %ld\n", i, sCurNanoTimeVal.tv_sec,
				sCurNanoTimeVal.tv_nsec);

		rtn = clock_gettime(CLOCK_BOOTTIME, &sCurNanoTimeVal2);
		printf("[i:%06d] %ld %ld \n--\n", i, sCurNanoTimeVal2.tv_sec,
				sCurNanoTimeVal2.tv_nsec);

	}

	return 0;
}

