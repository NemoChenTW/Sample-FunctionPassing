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

	void (LiveMsgTool::*lmsgEntryfun)() = &LiveMsgTool::EntryAlive;
	void (LiveMsgTool::*lmsgExitfun)() = &LiveMsgTool::ExitAlive;

	cout << "First show" << endl;
	liveMsg->showMsg();

	(liveMsg->*lmsgEntryfun)();
	(liveMsg->*lmsgExitfun)();

//	f fPtr = (f)(&LiveMsgTool::EntryAlive);
//	fPtr();

//	entryReader->setFunPtr( fPtr );
//	entryReader->setFunPtr( (f)(&LiveMsgTool::EntryAlive) );

	entryReader->runFun();
	exitReader->runFun();

	cout << "\nEnd show" << endl;
	liveMsg->showMsg();

	return 0;
}
