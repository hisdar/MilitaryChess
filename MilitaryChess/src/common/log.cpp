#include "log.h"


Log::Log()
{
}


Log::~Log()
{
}

void Log::output(int level, const char *pFunctionName, int lineNumber, const char *pFormat, ...)
{
	va_list ap;

	va_start(ap, pFormat);
	printf(pFormat, ap);
	va_end(ap);
	
	return;
}