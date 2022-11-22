#pragma once

#ifdef BUILD_DLL
#   define DRO_API __declspec(dllexport)
#else
#   define DRO_API __declspec(dllimport)
#endif

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#   define DRO_WINDOWS
#endif

#ifndef DRO_WINDOWS
#   error "windows better"
#endif
