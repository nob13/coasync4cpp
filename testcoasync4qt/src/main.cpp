
// testCoasync4cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/**
Einführung in tests: http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html
Doku: https://code.google.com/p/googletest/w/list
https://code.google.com/p/googletest/wiki/V1_7_Primer
https://code.google.com/p/googletest/wiki/V1_7_AdvancedGuide
*/

int _tmain(int argc, _TCHAR* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


