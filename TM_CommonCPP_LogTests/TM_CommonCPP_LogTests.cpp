

#include "pch.h"
#include <iostream>

#include "plog/Log.h"

int main()
{
	plog::init(plog::debug, "Hello.txt");
	LOGD << "Hello log!";
    std::cout << "Hello World!\n"; 
}
