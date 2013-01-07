#ifndef __MODULES_H__
#define __MODULES_H__

#include <windows.h>
#include <Tlhelp32.h>
#include <list>

#include "process.h"

std::list<MODULEENTRY32> GetModuleList(DWORD dwPid);
BOOL IsModuleExist(DWORD dwPid, char *szModuleName);
std::list<MODULEENTRY32> GetModuleList(char *szModuleName);

#endif // __MODULES_H__
