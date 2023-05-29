#include <string>

using namespace std;

class Product {
public:
    Product();
    explicit Product(string name, string code, double price, int quantity, int supplier_id, int year, int month, int day, int hour, string time);
    ~Product();

    string getName() const;
    void setName(string name);

    string getCode() const;
    void setCode(string code);

    double getPrice() const;
    void setPrice(double price);

    int getQuantity() const;
    void setQuantity(int quantity);

    int getSupplierId() const;
    void setSupplierId(int supplier_id);
    
    int getPurchaseDate() const;
    void setPurchaseDate(int year, int month, int day, int hour, string time);

    void updateStock(int quantity);
    void updateStock(string action, int quantity);

    void displayInfo() const;

private:
    string name_;
    string code_;
    string time_;
    double price_;
    int quantity_;
    int supplier_id_;
    int year_, month_, day_, hour_;
};


