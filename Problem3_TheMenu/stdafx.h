// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <Windows.h>

// TODO: function declarations

int FindSum(
	int[], 
	size_t length
);

int FindAbsolute(
	int
);

void Dump(
	FILE *, 
	FILE *
);
