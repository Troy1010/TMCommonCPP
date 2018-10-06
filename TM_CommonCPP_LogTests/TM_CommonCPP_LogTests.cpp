#include "pch.h"
#include <iostream>

#include "plog/Log.h"
#include "../TM_CommonCPP/include/TM_CommonCPP/Narrate.h"

namespace plog
{
	class MyFormatter
	{
	public:
		static util::nstring header() // This method returns a header for a new file. In our case it is empty.
		{
			return util::nstring();
		}

		static util::nstring format(const Record& record) // This method returns a string from a record.
		{
			util::nostringstream ss;
			ss << record.getMessage() << "\n"; // Produce a simple string with a log message.

			return ss.str();
		}
	};
}

int main()
{
	plog::init<plog::MyFormatter>(plog::debug, "Log_LogTests.txt");
	LOGD << "START";
#pragma region Narrate
	int i = 2;
	LOGD << "i:" << Narrator::Narrate(i);
	const char vCString[] = "qwer";
	LOGD << "vCString:" << Narrator::Narrate(vCString);
	std::set<int> cSet;
	cSet.insert(43);
	cSet.insert(90);
	cSet.insert(63);
	LOGD << "cSet:" << Narrator::Narrate(cSet);
#pragma endregion
}
