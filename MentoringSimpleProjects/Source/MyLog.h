#pragma once
#include <iostream>

#define My_LOG(fmt,...) printf(fmt,##__VA_ARGS__); \
	putchar('\n')