/*
 * LiveMsgTool.h
 *
 *  Created on: 2015年12月15日
 *      Author: nemo
 */

#ifndef LIVEMSGTOOL_LIVEMSGTOOL_H_
#define LIVEMSGTOOL_LIVEMSGTOOL_H_

#include <string>
#include <iostream>
using namespace std;

class LiveMsgTool {
public:
	typedef void (LiveMsgTool::*LiveMsgMemberFunc)();
private:
	string msgEntry;
	string msgExit;

public:
	LiveMsgTool();
	virtual ~LiveMsgTool();

	void EntryAlive()
	{
		cout << "run EntryAlive." << endl;
		msgEntry = "Entry";
	}

	void ExitAlive()
	{
		cout << "run ExitAlive." << endl;
		msgExit = "Exit";
	}

	void showMsg();


};

#endif /* LIVEMSGTOOL_LIVEMSGTOOL_H_ */
