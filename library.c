#include "library.h"

#include <stdio.h>

void array_processing(
	uint8_t* data,
	int data_max_len,
	int* data_used_len,
	uint8_t* result_out,
	int result_max_len,
	int* result_used_len)
{
	if (data_max_len < 500000)
	{
		*data_used_len = 0;
		*result_used_len = 0;
		return;
	}

	if (result_max_len < 100000)
	{
		*data_used_len = 0;
		*result_used_len = -1;
		return;
	}

	*data_used_len = 500000;

	for (int i = 0; i < 100000; i++)
	{
		result_out[i] = data[i];
		*result_used_len += i;
	}
}
