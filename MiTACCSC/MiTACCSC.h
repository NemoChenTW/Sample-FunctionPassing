/*
 * MiTACCSC.h
 *
 *  Created on: 2015年12月15日
 *      Author: nemo
 */

#ifndef MITACCSC_MITACCSC_H_
#define MITACCSC_MITACCSC_H_

#include <stddef.h>
#include <iostream>
using namespace std;

//void func ( void (*f)(void) );
typedef void (*f)(void);

class MiTACCSC {
private:
//	void *funPtr = NULL;
	f *funPtr;
public:
	MiTACCSC();
	virtual ~MiTACCSC();

	void setFunPtr(f func)
	{
		funPtr = &func;
	}


	void runFun();

};

#endif /* MITACCSC_MITACCSC_H_ */
