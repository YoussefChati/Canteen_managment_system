#include <string>

using namespace std;

class Supplier {
public:
    Supplier();
    Supplier(string name, string code, string email, string phone);
    ~Supplier();

    string getName() const;
    void setName(string name);

    string getCode() const;
    void setCode(string code);

    string getEmail() const;
    void setEmail(string email);

    string getPhone() const;
    void setPhone(string phone);

    void displayInfo() const;

private:
    string name_;
    string code_;
    string email_;
    string phone_;
};


