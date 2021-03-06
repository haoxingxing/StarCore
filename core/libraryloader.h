﻿#ifndef LIBRARY_H_
#define LIBRARY_H_
//
//#include <cstdlib>
//
//#ifdef _WIN32
//#include <string>
//#include <windows.h>
//#else
//#include <string.h>
//#include <dlfcn.h>
//#include <errno.h>
//#endif
//#include "domain.h"
//
//class Library 
//#ifdef UsingMemoryLeakCheck
//	: MemoryLeak_Probe
//#endif
//{
//private:
//	std::string _libPath;
//	int lib_version_;
//
//public:
//	typedef int(*handle)(domain*);
//#ifdef _WIN32
//	HMODULE _module;
//#else
//	void *_module;
//#endif
//
//public:
//	Library();
//	Library(const std::string filePath, std::string version = "0");
//	virtual ~Library();
//	/**
//	*@brief load library
//	*/
//	bool load(std::string libFilePath);
//
//	/**
//	*@brief get symbol form library
//	*/
//	handle getSymbol(const std::string symbolName);
//
//private:
//	/**
//	*@brief release library
//	*/
//	void releaseLibrary();
//};
//
#endif /* LIBRARY_H_ */