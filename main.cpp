#include "Laba_5.h"

/** Created a Sneaker class, added a SportShoesStore class
 *  that contains an assortment of sneakers,
 *  methods for sorting shoes by price,
 *  and the ability to display the top most popular sneakers by number of sales */

int main()
{
    vector<Sneaker> sneakers;
    cout << "Enter number of objects:" << endl;
    int count_of_object;
    cin >> count_of_object;
    cout << "----------------------------------------------------------" << endl;

    for (int temporary_index = 0; temporary_index < count_of_object; temporary_index++)
    {
        sneakers.push_back(Sneaker());
    }

    for (int temporary_index = 0; temporary_index < count_of_object; temporary_index++)
    {
        cout << "\nSneaker " << temporary_index + 1 << " :" << endl;
        cin >> sneakers[temporary_index];
    }
    cout << "----------------------------------------------------------" << endl;

    float *array_prices = new float[count_of_object];
    for (int temporary_index = 0; temporary_index < count_of_object; temporary_index++)
    {
        array_prices[temporary_index] = sneakers[temporary_index].price_on_hryvna;
    }

    SportShoesStore object_for_sorting_array;

    object_for_sorting_array.Sort(array_prices, count_of_object);

    cout << "Catalog:" << endl
         << endl;

    Comparing(array_prices, sneakers, count_of_object);

    cout << "The catalog has been sorted by price" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "If you want to see the top, enter 1, else program will be closed" << endl;
    int choise = 0;
    cin >> choise;

    if (choise == 1)
    {
        cout << "----------------------------------------------------------" << endl;
        cout << "Top sales :" << endl
             << endl;
        int *array_sales = new int[count_of_object];
        for (int temporary_index = 0; temporary_index < count_of_object; temporary_index++)
        {
            array_sales[temporary_index] = sneakers[temporary_index].quantity_sales;
        }

        object_for_sorting_array.Sort(array_sales, count_of_object);

        Comparing(array_sales, sneakers, count_of_object);

        delete[] array_sales;
    }
    else
    {
        cout << "----------End----------" << endl;
        return 0;
    }

    delete[] array_prices;
    system("Pause");
}