/*
 * MiTACCSC.cpp
 *
 *  Created on: 2015年12月15日
 *      Author: nemo
 */

#include "MiTACCSC.h"

MiTACCSC::MiTACCSC() {
	// TODO Auto-generated constructor stub

}

MiTACCSC::~MiTACCSC() {
	// TODO Auto-generated destructor stub
}

void MiTACCSC::setFunPtr(f func)
{
	cout << endl << "In setFunPtr" << endl;

	funPtr = &func;

	cout << "End setFunPtr" << endl << endl;
}

void MiTACCSC::runFun()
{
	if(funPtr != NULL)
	{
		cout << "funPtr is not NULL." << endl;
//		*funPtr;
	}
	else
	{
		cout << "funPtr is NULL." << endl;
	}
}
