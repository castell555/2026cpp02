#pragma once

class DynamicArray {
private:
	int size;
	int* ptr;
public:
	DynamicArray(int size);
	virtual ~DynamicArray();
	int getsize() const;

	void setValue(int idx, int value);
	int getValue(int idx) const;
};