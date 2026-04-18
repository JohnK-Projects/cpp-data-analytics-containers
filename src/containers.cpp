#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>

void Load_Data(std::vector<Car> &cars, const std::string &in_file)
{
    // TODO: Load data from file
    Car temp;
    // TODO: Create a Car structure with the column information
    csvstream csvin(in_file);
    std::map<std::string, std::string> row;
    // TODO: Add Car objects to the vector
    while (csvin >> row)
    {
        temp.vin = row["vin"];
        temp.make = row["car_make"];
        temp.year = std::stoi(row["car_year"]);
        temp.color = row["car_color"];
        temp.value = std::stod(row["value"]);
        temp.state = row["state"];
        //add record to vector
        cars.push_back(temp);
    }
}

Car Car_Value_Analytics(std::vector<Car> &cars, int operation)
{
    if (operation == MAX)
    {
        auto maxElement = std::max_element(cars.begin(), cars.end(),
                   [](Car const& lhs, Car const& rhs){return lhs.value < rhs.value;});
    return *maxElement;
    }
    else if (operation == MIN)
    {
        auto minElement = std::min_element(cars.begin(), cars.end(),
                   [](Car const& lhs, Car const& rhs){return lhs.value < rhs.value;});
        return *minElement;
    }
}

//all 1930 or later
std::vector<Car> Cars_from_decade(std::vector<Car> &cars, int decade)
{
    decade = decade - (decade % 10);
    std::vector<Car> decadeCar;
    std::copy_if(cars.begin(), cars.end(), std::back_inserter(decadeCar),
                 [decade](const Car &c){return (c.year >= decade && c.year <= decade + 9);});
    std::sort(decadeCar.begin(), decadeCar.end(), [](Car const& lhs, Car const& rhs)
            {return lhs.value < rhs.value;});

    return decadeCar;
}
