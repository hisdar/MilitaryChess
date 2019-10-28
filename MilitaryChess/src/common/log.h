#ifndef _LOG_H_
#define _LOG_H_
#include <stdarg.h>

namespace cn
{
	namespace hisdar
	{
		class Log
		{
		public:
			Log();
			virtual ~Log();

			void output(int level, const char *pFunctionName, int lineNumber, const char *pFormat, ...);
		};
	}
}

#define LOG(format, ...) output(__func__, __LINE__, ...)

#endif