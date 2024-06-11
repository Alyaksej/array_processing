#ifndef ARRAY_PROCESSING_LIBRARY_H
#define ARRAY_PROCESSING_LIBRARY_H

#include <stdint.h>

void array_processing(
	uint8_t* data,
	int data_max_len,
	int* data_used_len,
	uint8_t* result_out,
	int result_max_len,
	int* result_used_len);

#endif //ARRAY_PROCESSING_LIBRARY_H
