#ifndef ARRAY_PROCESSING_LIBRARY_H
#define ARRAY_PROCESSING_LIBRARY_H

#include <glob.h>

void array_processing(
	void* data,
	int data_max_len,
	int* data_used_len,
	void* result_out,
	int result_max_len,
	int* result_used_len);

#endif //ARRAY_PROCESSING_LIBRARY_H
