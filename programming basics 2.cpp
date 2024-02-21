#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double originalPrice, markupPercentage, salesTaxRate;
	cout << "Enter original price of item: $";
	cin >> originalPrice;
	cout << "Enter markup percentage: ";
	cin >> markupPercentage;
	cout << "Enter sales tax rate: ";
	cin >> salesTaxRate;

	double sellingPrice = originalPrice + (originalPrice * (markupPercentage / 100));
	double salesTax = sellingPrice * (salesTaxRate / 100);
	double finalPrice = sellingPrice + salesTax;

	cout << fixed << setprecision(2);
	cout << "Original price of the item: $" << originalPrice << endl;
	cout << "Markup percentage: " << markupPercentage << "%" << endl;
	cout << "Store's selling price of the item: $" << sellingPrice << endl;
	cout << "Amount of sales tax: $" << salesTax << endl;
	cout << "Final price of the item: $" << finalPrice << endl;

	return 0;
}
