# Array_processing

## Library description

This library is written on C and it's used to process data of byte array of uint_8 format.

Description of the function input parameters 

void array_processing(
	uint8_t* data,
	int data_max_len,
	int* data_used_len,
	uint8_t* result_out,
	int result_max_len,
	int* result_used_len);

- data - pointer to an array of uint8_t type that holds the input data to be processed
- data_max_len - integer specifying the maximum length of the data array
- data_used_len - pointer to an integer that indicates the length of the part of the data array used during processing.
- result_out - pointer to an array of uint8_t type where the processed data will be stored
- result_max_len - integer specifying the maximum length of the result_out array
- result_used_len - pointer to an integer that shows the actual length of the result_out array.

## Make library

1. Clone repository from Gitlab using command in terminal _git clone git@github.com:Alyaksej/array_processing.git_
2. cd path/to/folder/array_processing
3. mkdir build
4. cd build
5. cmake ..
6. make
