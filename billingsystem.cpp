


#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    double price;
    int quantity;
};

struct Bill {
    string customerName;
    Item items[10];
    int numItems;
    double total;
};

void addItems(Bill &bill) {
    cout << "Enter number of items: ";
    cin >> bill.numItems;
    for (int i = 0; i < bill.numItems; i++) {
        cout << "Enter item name: ";
        cin >> bill.items[i].name;
        cout << "Enter item price: ";
        cin >> bill.items[i].price;
        cout << "Enter item quantity: ";
        cin >> bill.items[i].quantity;
    }
}

void calculateTotal(Bill &bill) {
    bill.total = 0;
    for (int i = 0; i < bill.numItems; i++) {
        bill.total += bill.items[i].price * bill.items[i].quantity;
    }
}

void printBill(Bill &bill) {
    cout << "Customer Name: " << bill.customerName << endl;
    cout << "Items:" << endl;
    for (int i = 0; i < bill.numItems; i++) {
        cout << bill.items[i].name << " x " << bill.items[i].quantity << " = " << bill.items[i].price * bill.items[i].quantity << endl;
    }
    cout << "Total: " << bill.total << endl;
}

int main() {
    Bill bill;
    cout << "Enter customer name: ";
    cin >> bill.customerName;
    addItems(bill);
    calculateTotal(bill);
    printBill(bill);
    return 0;
}


