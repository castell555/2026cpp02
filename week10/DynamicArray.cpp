#include "DynamicArray.h"

DynamicArray::DynamicArray(int size) {
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
	ptr[idx] = value;
}

int DynamicArray::getValue(int idx) const
{
	return ptr[idx];
}
