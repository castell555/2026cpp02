#include "receipt.h"
Receipt::Receipt(int receiptNumber, Company company) : receiptNumber(receiptNumber), company(company), receiptTotal(0)
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
	company.print();
	cout << "영수증 번호: " << receiptNumber << endl;
	cout << "총 금액: " << receiptTotal << endl;
}