#include "Supplier.h"
#include <iostream>

using namespace std;

Supplier::Supplier()
    : name_(""), code_(""), email_(""), phone_("")
{
	//empty body
}

Supplier::Supplier(string name, string code, string email, string phone )
    : name_(name), code_(code), email_(email), phone_(phone)
{
	//empty body
}

Supplier::~Supplier() {}

string Supplier::getName() const {
    return name_;
}

void Supplier::setName(string name) {
    name_ = name;
}

string Supplier::getCode() const {
    return code_;
}

void Supplier::setCode(string code) {
    code_ = code;
}

string Supplier::getEmail() const {
    return email_;
}

void Supplier::setEmail(string email) {
    email_ = email;
}

string Supplier::getPhone() const {
    return phone_;
}

void Supplier::setPhone(string phone) {
    phone_ = phone;
}

void Supplier::displayInfo() const {
    cout << "Supplier name: " << name_ << endl;
    cout << "Supplier code: " << code_ << endl;
    cout << "Email: " << email_ << endl;
    cout << "Phone number: " << phone_ << endl;
}

