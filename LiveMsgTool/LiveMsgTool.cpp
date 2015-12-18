/*
 * LiveMsgTool.cpp
 *
 *  Created on: 2015年12月15日
 *      Author: nemo
 */

#include "LiveMsgTool.h"

LiveMsgTool::LiveMsgTool() {
	msgEntry = "NULL";
	msgExit = "NULL";

}

LiveMsgTool::~LiveMsgTool() {
	// TODO Auto-generated destructor stub
}

void LiveMsgTool::showMsg()
{
	cout << "ShowMsg" << endl;

	cout << "EntryMessage = "	<< msgEntry	<< endl;
	cout << "ExitMessage = "	<< msgExit	<< endl;
}
