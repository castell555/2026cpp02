#include "DynamicArray.h"

DynamicArray::DynamicArray(int size) {
	this->size = size;
	ptr = new int[size]; // 동적할당(heap memory)
}

DynamicArray::~DynamicArray() {
	delete ptr; // 동적할당 해제
	ptr = nullptr; // dangling pointer 방지
}
int DynamicArray::getsize() const
{
	return size;
}

void DynamicArray::setValue(int idx, int value)
{
	if (idx >= 0 && idx < getsize())
		ptr[idx] = value;
	else
		throw 1000; // 예외 발생
}

int DynamicArray::getValue(int idx) const
{
	return ptr[idx];
}
