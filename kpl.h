#pragma once

#include <TlHelp32.h>
#include <string>
#include <ctime>

_declspec(dllexport) bool FindProcess(char* ProName);
_declspec(dllexport) int Kill_Pro(char Kill_Name[], int retrytimes);