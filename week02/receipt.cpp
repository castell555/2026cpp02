#include "receipt.h"
Receipt::Receipt(int receiptNumber) : receiptNumber(receiptNumber), receiptTotal(0)
{
}
Receipt::~Receipt()
{
}
void Receipt::add(int quantity, Beverage beverage)  // use-a
{
	receiptTotal += quantity * beverage.getPrice();
}
void Receipt::print() const
{
	cout << "영수증 번호: " << receiptNumber << endl;
	cout << "총 금액: " << receiptTotal << endl;
}