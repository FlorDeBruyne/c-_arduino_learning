//    - Write a program to implement a simple inventory system for a shop.
#include <iostream>
#include <vector>

using namespace std;


class Product{
public:
    string name;
    double id;
    float price;
    double quantity;

    Product(string name, double id, float price): name(name), id(id), price(price), quantity(1) {}
    Product(string name, double id, float price, double quantity):  name(name), id(id), price(price), quantity(quantity) {}

    void removeProduct(double  amount){
        quantity -= amount;
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

    void print() const {
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

    Product* findProductById(double productId){
        for (auto& product : products){
            if (product.id == productId){
                return &product;
            };
        };
        return nullptr;
    };

    bool removeProduct(double productId){
        for (auto it = products.begin(); it != products.end(); ++it){
            if (it->id == productId){
                products.erase(it);
                return true;
            }
        }
        return false;
    };
    
    void print(){
        cout << "Inventory of shop: " << shopName << endl;
        cout << "----------------------------" << endl;
        cout << "This is the product inventory: " << endl;
        for (auto& product : products){
            product.print();
            cout << "----------------------------" << endl;
        }
    };


};

int main(){
    string shopName;
    cout << "Enter the shop name: ";
    cin >> shopName;

    Inventory inventory(shopName);

    Product apple("Jona Gold", 1, 2.5);
    apple.changeQuantity(100);
    inventory.addProduct(apple);

    string productName;
    double productId;
    float productPrice;
    double productAmount;

    cout << "Enter product details:" << endl;
    cout << "Name: ";
    cin >> productName;
    cout << "ID: ";
    cin >> productId;
    cout << "Price: ";
    cin >> productPrice;
    cout << "Quantity: ";
    cin >> productAmount;

    Product newProduct(productName, productId, productPrice, productAmount);
    inventory.addProduct(newProduct);

    double searchId;
    cout << "Enter product ID to search: ";
    cin >> searchId;

    Product* found = inventory.findProductById(searchId);
    if (found) {
        cout << "Product found:" << endl;
        found->print();
    } else {
        cout << "No product with this ID." << endl;
    }

    inventory.print();
    return 0;

    return 0;
}