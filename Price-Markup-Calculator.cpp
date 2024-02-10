#include <iostream>
#include <iomanip> // For setprecision

using namespace std;

int main() {
    // Declare variables
    double originalPrice, markupPercentage, salesTaxRate;
    double sellingPrice, salesTax, finalPrice;

    // Input
    cout << "Enter the original price of the item: ";
    cin >> originalPrice;
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;
    cout << "Enter the sales tax rate (as a percentage): ";
    cin >> salesTaxRate;

    // Processing
    sellingPrice = originalPrice * (1 + markupPercentage / 100);
    salesTax = sellingPrice * (salesTaxRate / 100);
    finalPrice = sellingPrice + salesTax;

    // Output
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "Original price of the item: $" << originalPrice << endl;
    cout << "Markup percentage: " << markupPercentage << "%" << endl;
    cout << "Store's selling price: $" << sellingPrice << endl;
    cout << "Sales tax amount: $" << salesTax << endl;
    cout << "Final price of the item: $" << finalPrice << endl;

    return 0;
}
