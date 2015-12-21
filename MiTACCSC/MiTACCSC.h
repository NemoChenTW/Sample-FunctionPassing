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
#include <functional>
using namespace std;

class MiTACCSC {
private:
	function<void(void)> funPtr;

public:
	MiTACCSC();
	virtual ~MiTACCSC();

	void setFunPtr(function<void(void)> fun);

	void runFun();

};

#endif /* MITACCSC_MITACCSC_H_ */
