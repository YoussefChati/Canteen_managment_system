#include "Supplier.h"
#include "Product.h"
#include "Template.h"
#include <iostream>

using namespace std;

int main() {
	
	string prdct;
	
	cout<<"Welcome to our Canteen Management System !"<<endl<<endl;
	
	while(prdct != "Exit")
  {
	cout<<"Choose the product:"<<endl<<"Airpods"<<endl<<"Ipad"<<endl<<"Jordans 4"<<endl<<"Sport short"<<endl;
	cout<<"To exit Type 'Exit' !!"<<endl;
	getline(cin, prdct);
	cout<<endl;
	
	prdct = toLower(prdct);
	
	if(prdct== "airpods")
	{
    // Creating a supplier object and setting its data
    Supplier supplier1;
    supplier1.setName("Supplier 1");
    supplier1.setCode("S1");
    supplier1.setEmail("Appleshop@gmail.com");
    supplier1.setPhone("123-456-7890");

    // Creating a product object and setting its data
    Product product1;
    product1.setName("AirPods");
    product1.setCode("P1");
    product1.setPrice(20.99);
    product1.setPurchaseDate(2022,12,30,12,"PM");
    product1.setQuantity(200);
    product1.setSupplierId(1);

    // Updating the product stock
    product1.updateStock("sell",20);
    product1.displayInfo();

    // Updating the supplier data
    supplier1.setName("Apple");
    supplier1.displayInfo();
    }
    
    else if(prdct == "ipad")
	{
    Supplier supplier1;
    supplier1.setName("Supplier 1");
    supplier1.setCode("S1");
    supplier1.setEmail("Appleshop@gmail.com");
    supplier1.setPhone("123-456-7890");

    Product product2;
    product2.setName("Ipad");
    product2.setCode("P2");
    product2.setPrice(300);
    product2.setPurchaseDate(2021,2,3,15,"PM");
    product2.setQuantity(200);
    product2.setSupplierId(1);

    product2.updateStock("sell", 80);
    product2.displayInfo();

    supplier1.setName("Apple");
    supplier1.displayInfo();
    }
    
    else if(prdct == "jordans 4")
	{
    Supplier supplier2;
    supplier2.setName("Supplier 2");
    supplier2.setCode("S2");
    supplier2.setEmail("Nikesports@gmail.com");
    supplier2.setPhone("572-095-2570");

    Product product3;
    product3.setName("Jordans 4");
    product3.setCode("P3");
    product3.setPrice(250);
    product3.setPurchaseDate(2020,3,28,10,"AM");
    product3.setQuantity(540);
    product3.setSupplierId(2);

    product3.updateStock("sell", 130);
    product3.displayInfo();

    supplier2.setName("Nike");
    supplier2.displayInfo();
    }
	else if(prdct == "sport short")
	{
    Supplier supplier3;
    supplier3.setName("Supplier 3");
    supplier3.setCode("S3");
    supplier3.setEmail("AdidasFitness@gmail.com");
    supplier3.setPhone("956-304-8636");

    Product product4;
    product4.setName("Sport short");
    product4.setCode("P3");
    product4.setPrice(40);
    product4.setPurchaseDate(2023,1,10,13,"PM");
    product4.setQuantity(2330);
    product4.setSupplierId(3);

    product4.updateStock("sell", 450);
    product4.displayInfo();

    supplier3.setName("Adidas");
    supplier3.displayInfo();
    }
    else if(prdct == "exit")
    {
    	cout<<"Thank you for using our program see you next time !"<<endl;
    	break;
	}
    else
    {
    	cout<<"ERROR: the product given is not included in the list, Please choose one correctly from the list ! "<<endl;
	}
    
	cout<<endl;   
  }
    return 0;
}

