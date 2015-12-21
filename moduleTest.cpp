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

	LiveMsgTool::LiveMsgMemberFunc entryFun = &LiveMsgTool::EntryAlive;
	LiveMsgTool::LiveMsgMemberFunc exitFun = &LiveMsgTool::ExitAlive;

	cout << "First show" << endl;
	liveMsg->showMsg();

	(liveMsg->*entryFun)();
	(liveMsg->*exitFun)();

//	f fPtr = (f)(&LiveMsgTool::EntryAlive);
//	fPtr();

//	entryReader->setFunPtr( fPtr );
//	entryReader->setFunPtr( (f)(&LiveMsgTool::EntryAlive) );

	cout << endl << "Prepare run function" << endl;
	entryReader->runFun();
	exitReader->runFun();

	cout << "\nEnd show" << endl;
	liveMsg->showMsg();

	return 0;
}
