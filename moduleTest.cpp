/*
 * moduleTest.cpp
 *
 *  Created on: 2015年12月15日
 *      Author: nemo
 */

#include "LiveMsgTool/LiveMsgTool.h"
#include "MiTACCSC/MiTACCSC.h"

#include <iostream>

using namespace std;

int main()
{
	MiTACCSC *entryReader = new MiTACCSC();
	MiTACCSC *exitReader = new MiTACCSC();

	LiveMsgTool *liveMsg = new LiveMsgTool();

	cout << "First show" << endl;
	liveMsg->showMsg();


	// Set Entry function
	auto entryFp = std::bind(&LiveMsgTool::EntryAlive, liveMsg);
	entryReader->setFunPtr(entryFp);

	// Set Exit function
	auto exitFp = std::bind(&LiveMsgTool::ExitAlive, liveMsg);
	exitReader->setFunPtr(exitFp);


	cout << endl << "Prepare run function" << endl;
	entryReader->runFun();
	exitReader->runFun();

	cout << "\nEnd show" << endl;
	liveMsg->showMsg();

	return 0;
}
