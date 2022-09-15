#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <system>
#define Clear; system("cls");
#else
#include <unistd.h>
#define Clear system("clear")
#endif

