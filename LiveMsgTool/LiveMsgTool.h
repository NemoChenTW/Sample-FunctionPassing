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

private:
	string msgEntry;
	string msgExit;

public:
	LiveMsgTool();
	virtual ~LiveMsgTool();

	void *EntryAlive()
	{
		msgEntry = "Entry";
		return NULL;
	}

	void *ExitAlive()
	{
		msgExit = "Exit";
		return NULL;
	}

	void showMsg();


};

#endif /* LIVEMSGTOOL_LIVEMSGTOOL_H_ */
