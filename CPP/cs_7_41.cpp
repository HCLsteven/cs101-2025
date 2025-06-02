#include <iostream>
#include <string>

using namespace std;

class Car {
    public:
    string m_brand;
    string m_model;
    int m_year;
    int m_Maxseating;
    int m_price;
    Car (string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        m_Maxseating = s;
        m_price = m_Maxseating * 500000;
    }
    int get_m_Maxseating(){
        return m_Maxseating;
    }
    int get_m_price(){
        return m_price;
    }
};    

int main()
{
    Car car_1("BMW", "X5", 2023, 6);
    Car car_2("Audi", "A1", 2021, 2);
    cout << car_1.m_brand <<" Price = " << car_1.get_m_price() << endl;
    cout << car_2.m_brand <<" Price = " << car_2.get_m_price() << endl;
    return 0;
}
