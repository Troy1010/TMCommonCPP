#include "pch.h"
#include <iostream>
#include "plog/Log.h"
#include "TM_CommonCPP/Narrate.h"
#include "TM_CommonCPP/PlogFormatter.h"
#include "TM_CommonCPP/Misc.h"
#include "TM_CommonCPP/Util_VariadicMacros.h"

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
	LOGD << "i:" << TMC::Narrate(i);
	const char vCString[] = "qwer";
	LOGD << "vCString:" << TMC::Narrate(vCString);
	std::set<int> cSet;
	cSet.insert(43);
	cSet.insert(90);
	cSet.insert(63);
	LOGD << "cSet:" << TMC::Narrate(cSet);
	bool bBool = true;
	LOGD << "bBool:" << TMC::Narrate(bBool);
	float fFloat = 0.46f;
	LOGD << "fFloat:" << TMC::Narrate(fFloat);
	std::set<std::set<int>> c2dSet = std::set<std::set<int>>();
	std::set<int> cSet2;
	cSet2.insert(34);
	cSet2.insert(19);
	cSet2.insert(36);
	std::set<int> cSet3 = std::set<int>();
	c2dSet.insert(cSet);
	c2dSet.insert(cSet2);
	c2dSet.insert(cSet3);
	LOGD << "c2dSet:" << TMC::Narrate(c2dSet);
	std::set<int> cSet4;
	LOGD << "cSetSize:" << cSet.size() << "  cSet3Size:" << cSet3.size() << "  cSet4Size:" << cSet4.size();
	double vDouble = 0.154;
	LOGD << "vDouble:" << TMC::Narrate(vDouble);
	int iInt1 = 2;
	int iInt2 = 34;
	LOGD << "COUNT_ARGS:" << COUNT_ARGS(iInt1, iInt2);
	std::string sString = "how,can,this,be";
	std::string sDelim = std::string(",");
	LOGD << TMC::Narrate(SplitString(sString, sDelim));
	std::string sString2 = "look^at^that^landscape";
	LOGD << TMC::Narrate(SplitString(sString2, "^"));
	std::string sString3 = "am,,I,empty";
	LOGD << TMC::Narrate(SplitString(sString3, ","));
#pragma endregion
}
