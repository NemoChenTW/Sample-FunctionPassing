/*
 * MiTACCSC.h
 *
 *  Created on: 2015年12月15日
 *      Author: nemo
 */

#ifndef MITACCSC_MITACCSC_H_
#define MITACCSC_MITACCSC_H_

#include <stddef.h>

//void func ( void (*f)(void) );
typedef void (*f)(void);

class MiTACCSC {
private:
	void *funPtr = NULL;

public:
	MiTACCSC();
	virtual ~MiTACCSC();

	void setFunPtr(void * funPtr)
	{
		this->funPtr = funPtr;
	}


	void runFun();

};

#endif /* MITACCSC_MITACCSC_H_ */
