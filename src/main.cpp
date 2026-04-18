#include <iostream>
#include "containers.h"
using namespace std;

// Main Function
int main()
{
  // TODO: Part I
    std::string input = "../../data/MOCK_DATA_CARS.csv";     // DO NOT MODIFY THIS LINE
    std::vector<Car> cars;
    Load_Data(cars, input); // Load Data

    cout <<"Cars size: " << cars.size() << endl;
  // TODO: Part II
    Car car = Car_Value_Analytics(cars, MAX);
    cout << "Car MAX value: " << car.value << endl;
    car = Car_Value_Analytics(cars, MIN);
    cout << "Car MIN value: " << car.value << endl;
  // TODO: Part III
    int decade = 1978;
    std::vector<Car> new_cars = Cars_from_decade(cars, decade);
    for (const Car &car : new_cars)
    {
      std::cout << "New cars for " << decade << " " << car.year << " "
                << car.value << std::endl;
    }
    cout << new_cars.size() << endl;
  return 0;
}