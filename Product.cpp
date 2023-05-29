#include "Product.h"
#include <iostream>

using namespace std;

Product::Product()
    : name_(""), code_(""),time_(""), price_(0.0), quantity_(0), supplier_id_(0), year_(0), month_(0), day_(0), hour_(0)
{
	//empty body
}

Product::Product(string name, string code, double price, int quantity, int supplier_id, int year, int month, int day, int hour, string time)
    : name_(name), code_(code), price_(price), quantity_(quantity), supplier_id_(supplier_id), year_(year), month_(month), day_(day), time_(time)
{
	//empty body
}

Product::~Product() {}

string Product::getName() const {
    return name_;
}

void Product::setName(string name) {
    name_ = name;
}

string Product::getCode() const {
    return code_;
}

void Product::setCode(string code) {
    code_ = code;
}

int Product::getPurchaseDate() const {
	return year_;
	return month_;
	return day_;
	return hour_;

}

void Product::setPurchaseDate(int year, int month, int day, int hour, string time) {
	year_ = year;
	month_ = month;
	day_ = day;
	hour_ = hour;
	time_ = time;
}
double Product::getPrice() const {
    return price_;
}

void Product::setPrice(double price) {
    if (price > 0) {
        price_ = price;
    }
    else {
        cout << "Invalid price. Please enter a positive number." << endl;
    }
}

int Product::getQuantity() const {
    return quantity_;
}

void Product::setQuantity(int quantity) {
    if (quantity >= 0) {
        quantity_ = quantity;
    }
    else {
        cout << "Invalid quantity. Please enter a non-negative number." << endl;
    }
}

int Product::getSupplierId() const {
    return supplier_id_;
}

void Product::setSupplierId(int supplier_id) {
    supplier_id_ = supplier_id;
}

void Product::updateStock(int quantity) {
    quantity_ += quantity;
}

void Product::updateStock(string action, int quantity) {
    if (action == "restock") {
        quantity_ += quantity;
    }
    else if (action == "sell") {
        if (quantity_ >= quantity) {
            quantity_ -= quantity;
        }
        else {
            cout << "Insufficient stock. Please restock before selling." << endl;
        }
    }
    else {
        cout << "Invalid action. Please enter either 'restock' or 'sell'." << endl;
    }
}

void Product::displayInfo() const {
    cout << "Product name: " << name_ << endl;
    cout << "Product code: " << code_ << endl;
    cout << "Price: $" << price_ << endl;
    cout << "Purchase Date: "<< year_ <<"/"<<month_<<"/"<<day_<<" at "<<hour_<<" "<<time_<<endl;
    cout << "Quantity in stock: " << quantity_ << endl;
    cout << "Supplier ID: " << supplier_id_ << endl;
}

