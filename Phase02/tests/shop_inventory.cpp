//    - Write a program to implement a simple inventory system for a shop.
#include <iostream>
#include <vector>

using namespace std;


class Product{
    string name;
    double id;
    float price;
    double quantity;

public:
    Product(string name, double id, float price): name(name), id(id), price(price), quantity(1) {}
    Product(string name, double id, float price, double quantity):  name(name), id(id), price(price), quantity(quantity) {}

    void removeProduct(double  amount){
        quantity = quantity - amount;
    };

    void changePrice(float newPrice){
        price = newPrice;
    };

    void changeName(string newName){
        name = newName;
    };

    void changeQuantity(double newQuantity){
        quantity = newQuantity;
    };

    void print(){
        cout << "Product name: " << name << endl;
        cout << "price: " << price << endl;
        cout << "Amount of products: " << quantity << endl;
    };
};

class Inventory{
private:
    vector<Product> products;
    string shopName;

public:
    Inventory(string shopName): shopName(shopName){};

    void addProduct(Product product){
        products.push_back(product);
    };

    void addProduct(){
        string productName;
        double productId;
        float productPrice;
        double productAmount;

        cout << "Give me the Product details: " << endl;
        cout << "What is the Product name: ";
        cin >> productName;
        cout << "What is the Product id: ";
        cin >> productId;
        cout << "What is the Product price: ";
        cin >> productPrice;
        cout << "How many Products: ";
        cin >> productAmount;
        Product product(productName, productId, productPrice, productAmount);
        products.push_back(product);
    };

    void removeProduct(Product product){
        products.pop_back();
    };
    
    void print(){
        cout << "This is the product inventory: " << endl;
        for (Product product : products){
            product.print();
            cout << endl;
        };
    };

    

};

int main(){
    string shopName;

    cout << "Give me the shop name: ";
    cin >> shopName;

    Inventory inventory(shopName);

    Product apple("Jona Gold", 001, 2.5);
    apple.changeQuantity(100);

    inventory.addProduct(apple);
    inventory.addProduct();
    inventory.print();

    return 0;
}