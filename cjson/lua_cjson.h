/********************************************************************
	Filename: 	lua_cjson.h
	Description:
	Version:  1.0
	Created:  7:3:2016   13:58
	
	Compiler: gcc vc
	Author:   wufan, love19862003@163.com
	Organization: lezhuogame
*********************************************************************/
#ifndef __lua_cjson_H__
#define __lua_cjson_H__
#ifdef USE_DLL_EXPORT
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif
#ifndef USE_DLL_EXPORT
#if __cplusplus
extern "C" {
#endif
#endif
#include "lauxlib.h"
  int DLL_EXPORT luaopen_cjson(lua_State *L);
#ifndef USE_DLL_EXPORT
#if __cplusplus
}
#endif
#endif
#endif // __lua_cjson_H__