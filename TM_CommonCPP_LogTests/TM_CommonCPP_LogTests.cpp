

#include "pch.h"
#include <iostream>

#include "plog/Log.h"
#include "../TM_CommonCPP/include/TM_CommonCPP/Narrate.h"

int main()
{
	plog::init(plog::debug, "Log_LogTests.txt");
#pragma region Narrate
	int i = 2;
	LOGD << "i:" << i;
#pragma endregion
}
