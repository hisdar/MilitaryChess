#include "log.h"
#include <stdio.h>

namespace cn
{
	namespace hisdar
	{
		const static char *g_logLevelString[] =
		{
			"DBG ",
			"INFO",
			"ERR ",
		};

		Log::Log()
		{
		}


		Log::~Log()
		{
		}

		void Log::output(int level, const char *pFunctionName, int lineNumber, const char *pFormat, ...)
		{
			printf("[%s] %s: %d ", g_logLevelString[level], pFunctionName, lineNumber);
			va_list ap;
			va_start(ap, pFormat);
			printf(pFormat, ap);
			va_end(ap);
	
			return;
		}

	}
}