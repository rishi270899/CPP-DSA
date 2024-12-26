#include <iostream>
using namespace std;
class Product
{
private:
    int code;
    string name;
    int price;
    int offer;

public:
    void getProducts()
    {
        cout << "Enter Code : ";
        cin >> code;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Price :";
        cin >> price;
        cout << "Enter Offer : ";
        cin >> offer;
    }

    void showProduct()
    {
        cout << "Code : " << code << endl;
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Offer : " << offer << endl;
    }

    void sale()
    {
        int qty;
        cout << "Enter Quantity : ";
        cin >> qty;
        int aa = qty * price;
        int amt = qty * offer;
        cout << "Actual Amount : " << aa << endl;
        cout << "Amount to Pay : " << amt << endl;
        cout << "U Save : " << aa - amt << endl;
    }
};

int main()
{
    Product p1;

    p1.getProducts();
    p1.showProduct();
    p1.sale();

    return 0;
}