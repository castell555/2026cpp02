classDiagram

&#x20;   class Beverage {

&#x20;       -string name

&#x20;       -int unitPrice

&#x20;       +Beverage(string name, int unitPrice)

&#x20;       +\~Beverage()

&#x20;       +getPrice() int

&#x20;   }



&#x20;   class Company {

&#x20;       -string name

&#x20;       -string tel

&#x20;       +Company(string name, string tel)

&#x20;       +\~Company()

&#x20;       +print() void

&#x20;   }



&#x20;   class Receipt {

&#x20;       -int receiptNumber

&#x20;       -int receiptTotal

&#x20;       -Company company

&#x20;       +Receipt(int receiptNumber, Company company)

&#x20;       +\~Receipt()

&#x20;       +add(int quantity, Beverage beverage) void

&#x20;       +print() void

&#x20;   }



&#x20;   Receipt o-- Company : Aggregation (Has-a)

&#x20;   Receipt ..> Beverage : Dependency (Use-a)

