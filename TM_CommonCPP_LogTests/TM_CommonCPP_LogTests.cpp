#include "pch.h"
#include <iostream>
#include "plog/Log.h"
#include "TM_CommonCPP/Narrate.h"
#include "TM_CommonCPP/PlogFormatter.h"
#include "TM_CommonCPP/Misc.h"

#include <iostream>
#include <fstream>

//namespace TM_CommonCPP
//{
//	std::string Narrate(float fFloat)
//	{
//		return Narrator::Narrate_StringStreamable(fFloat);
//	}
//}


int main()
{
	remove("Log_LogTests.txt");
	plog::init<plog::MyFormatter>(plog::debug, "Log_LogTests.txt");
	LOGD << Hello();
#pragma region Narrate
	int i = 2;
	LOGD << "i:" << TM_CommonCPP::Narrate(i);
	const char vCString[] = "qwer";
	LOGD << "vCString:" << TM_CommonCPP::Narrate(vCString);
	std::set<int> cSet;
	cSet.insert(43);
	cSet.insert(90);
	cSet.insert(63);
	LOGD << "cSet:" << TM_CommonCPP::Narrate(cSet);
	bool bBool = true;
	LOGD << "bBool:" << TM_CommonCPP::Narrate(bBool);
	float fFloat = 0.46f;
	LOGD << "fFloat:" << TM_CommonCPP::Narrate(fFloat);
	std::set<std::set<int>> c2dSet = std::set<std::set<int>>();
	std::set<int> cSet2;
	cSet2.insert(34);
	cSet2.insert(19);
	cSet2.insert(36);
	std::set<int> cSet3 = std::set<int>();
	c2dSet.insert(cSet);
	c2dSet.insert(cSet2);
	c2dSet.insert(cSet3);
	LOGD << "c2dSet:" << TM_CommonCPP::Narrate(c2dSet);
	std::set<int> cSet4;
	LOGD << "cSetSize:" << cSet.size() << "  cSet3Size:" << cSet3.size() << "  cSet4Size:" << cSet4.size();
	double vDouble = 0.154;
	LOGD << "vDouble:" << TM_CommonCPP::Narrate(vDouble);
#pragma endregion
}
