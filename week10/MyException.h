#pragma once
//#include "DynamicArray.h"

class DynamicArray;   // ??©ö©¡ ¨ù¡¾¨ú©£
class MyException {
public:
	int errorCode;
	const char* errorMessage;
	const DynamicArray* errorAddress;

	MyException(int ec, const char* em, const DynamicArray* ea);
};