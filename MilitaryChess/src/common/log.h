#ifndef _LOG_H_
#define _LOG_H_
#include <stdarg.h>
#include <common/common.h>

#define LOG_LEVEL_DEBUG 0
#define LOG_LEVEL_INFOR 1
#define LOG_LEVEL_ERROR 2

namespace cn
{
	namespace hisdar
	{
		class DLL_API Log
		{
		public:
			Log();
			virtual ~Log();

			static void output(
				int level,
				const char *pFunctionName,
				int lineNumber,
				const char *pFormat,
				...);
		};
	}
}

#define LOG(level, format, ...) \
	cn::hisdar::Log::output(level, __FUNCTION__, __LINE__, format, ##__VA_ARGS__)

#define LOGD(format, ...) LOG(LOG_LEVEL_DEBUG, format, ##__VA_ARGS__)
#define LOGI(format, ...) LOG(LOG_LEVEL_INFOR, format, ##__VA_ARGS__)
#define LOGE(format, ...) LOG(LOG_LEVEL_ERROR, format, ##__VA_ARGS__)

#endif