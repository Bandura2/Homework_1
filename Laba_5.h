#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>

using namespace std;

class Sneaker
{
public:
    string brand;
    int size;
    string color;
    float price_on_hryvna;
    int quantity_in_stock;
    string material;
    int quantity_sales;

    Sneaker() {}

    ~Sneaker() {}
};

class SportShoesStore
{
public:
    SportShoesStore() {}

    void Sort(float arr[], int size)
    {
        int temporary_index, second_temporary_index;
        for (temporary_index = 0; temporary_index <= size - 1; temporary_index++)
        {
            for (second_temporary_index = 0; second_temporary_index < size - temporary_index; second_temporary_index++)
            {
                if (arr[second_temporary_index + 1] > arr[second_temporary_index])
                    swap(arr[second_temporary_index + 1], arr[second_temporary_index]);
            }
        }
    }

    void Sort(int aray[], int size)
    {
        int temporary_index, second_temporary_index;
        for (temporary_index = 0; temporary_index < size; temporary_index++)
        {
            for (second_temporary_index = 0; second_temporary_index < size; second_temporary_index++)
            {
                if (aray[second_temporary_index] < aray[temporary_index])
                    swap(aray[second_temporary_index], aray[temporary_index]);
            }
        }
    }
};

istream &operator>>(istream &is, Sneaker &object)
{
    cout << "Enter Brand: ";
    is >> object.brand;
    cout << "Enter size: ";
    is >> object.size;
    cout << "Enter color: ";
    is >> object.color;
    cout << "Enter price: ";
    is >> object.price_on_hryvna;
    cout << "Enter quantity in stock: ";
    is >> object.quantity_in_stock;
    cout << "Enter material: ";
    is >> object.material;
    cout << "Enter quantity salers: ";
    is >> object.quantity_sales;
    return is;
}
ostream &operator<<(ostream &os, const Sneaker &object)
{
    os << "Brand: " << object.brand << endl;
    os << "Size: " << object.size << endl;
    os << "Color: " << object.color << endl;
    os << "Price: " << object.price_on_hryvna << endl;
    os << "Quantity in stock: " << object.quantity_in_stock << endl;
    os << "Material: " << object.material << endl;
    os << "Quantity sales: " << object.quantity_sales << endl
       << endl;
    return os;
}

float Comparing(float array_prices[], vector<Sneaker> comparable_vector, int size)

{
    for (int temporary_index = 0; temporary_index < size; temporary_index++)
    {
        for (int second_temporary_index = 0; second_temporary_index < size; second_temporary_index++)
        {
            if (array_prices[temporary_index] == comparable_vector[second_temporary_index].price_on_hryvna)
                cout << comparable_vector[second_temporary_index];
        }
    }
}
int Comparing(int array_sales[], vector<Sneaker> comparable_vector, int size)
{
    for (int temporary_index = 0; temporary_index < size; temporary_index++)
    {
        for (int second_temporary_index = 0; second_temporary_index < size; second_temporary_index++)
        {
            if (array_sales[temporary_index] == comparable_vector[second_temporary_index].quantity_sales)
                cout << comparable_vector[second_temporary_index];
        }
    }
}