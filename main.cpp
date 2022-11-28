#include "Laba_5.h"

int main()
{
    vector<Sneaker> sneakers;
    cout <<"Enter number of objects:"<<endl;
    int num_object;
    cin >> num_object;
    cout <<"----------------------------------------------------------"<< endl;

  for(int temporary_index = 0; temporary_index < num_object; temporary_index++)
    {
        sneakers.push_back(Sneaker());
    }

    for(int temporary_index = 0; temporary_index < num_object; temporary_index++)
    {
        cout << "\nSneaker "<< temporary_index + 1 <<" :"<<endl;
        cin >> sneakers[temporary_index];
    }
    cout <<"----------------------------------------------------------"<< endl;

    float *array_prices = new float[num_object];
    for(int temporary_index = 0; temporary_index < num_object; temporary_index++)
    {
        array_prices[temporary_index] = sneakers[temporary_index].price_on_hryvna;
    }

    SportShoesStore object_for_sort;


    object_for_sort.Sort(array_prices, num_object);

    cout<<"Catalog:\n" << endl;

    Comparing(array_prices, sneakers, num_object);

    cout<<"The catalog has been sorted by price"<<endl;
    cout <<"----------------------------------------------------------"<< endl;
    cout<<"If you want to see the top, enter 1, else program will be closed"<<endl;
    int choise = 0;
    cin >> choise;

    if (choise == 1)
    {
        cout <<"----------------------------------------------------------"<< endl;
        cout <<"Top sales :\n"<<endl;
        int *array_sales = new int[num_object];
        for(int temporary_index = 0; temporary_index < num_object; temporary_index++)
        {
            array_sales[temporary_index] = sneakers[temporary_index].quantity_sales;
        }

        object_for_sort.Sort(array_sales,num_object);

        Comparing(array_sales, sneakers, num_object);

        delete[] array_sales;
    }else
    {
        cout<<"----------End----------"<<endl;
        return 0;
    }

    delete[] array_prices;
    system ("Pause");
}
