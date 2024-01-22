#include <string>
#include <iostream>
#include <utility>
#include "../../include/model/Vehicle.h"
using namespace std;

Vehicle::Vehicle()
{
    cout << "constructor Vehicle" << endl;
}

Vehicle::Vehicle(string _rentalPricePerDay, string _registrationNumber)
{
    this->registrationNumber = _registrationNumber;
    this->rentalPricePerDay = _rentalPricePerDay;
}

const string &Vehicle::getRentalPricePerDay() const
{
    return rentalPricePerDay;
}

const string &Vehicle::getRegistrationNumber() const
{
    return registrationNumber;
}

void Vehicle::setRentalPricePerDay(const string &rentalPricePerDay)
{
    Vehicle::rentalPricePerDay = rentalPricePerDay;
}

void Vehicle::setRegistrationNumber(const string &registrationNumber)
{
    Vehicle::registrationNumber = registrationNumber;
}

void Vehicle::vehicleInfo() {
    cout << "Rental price per day: " << this->rentalPricePerDay << " PLN" << "\n\r" << "Registration number: " << this->registrationNumber << endl;
}

ostream& operator << (std::ostream& outs, const Vehicle& vehicle)
{
    return outs << "\n\r" << "Price per day: " << vehicle.getRentalPricePerDay() << " PLN" << "\n\r" << "Registration Number: " << vehicle.getRegistrationNumber() << endl;
}
