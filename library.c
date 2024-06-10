#include "library.h"

#include <stdio.h>
#include <memory.h>

void array_processing(
	void* data,
	int data_max_len,
	int* data_used_len,
	void* result_out,
	int result_max_len,
	int* result_used_len)
{
	double len_m_bytes = data_max_len / (1024 * 1024);

	if (len_m_bytes < 500)
	{
		*data_used_len = 0;
		return;
	}
	else if (len_m_bytes > 1000) 
	{
		*data_used_len = -1;
		return;
	}

	char bytes_array[data_max_len];

	for (int i = 0; i < data_max_len; i++)
	{
		bytes_array[i] = ((char*)data)[i];
		*data_used_len += i;
		*result_used_len += i;
	}

	result_out = bytes_array;
}
