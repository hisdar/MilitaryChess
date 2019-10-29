#ifndef _COMMON_H_
#define _COMMON_H_

#ifdef DLL_EXPORTS    
#define DLL_API __declspec(dllexport)    
#else    
#define DLL_API __declspec(dllimport)    
#endif   

#endif