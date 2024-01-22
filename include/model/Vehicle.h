#include <string>
#include <iostream>
using namespace std;
#ifndef CAR_RENTAL_VEHICLE_H
#define CAR_RENTAL_VEHICLE_H

class Vehicle
{
private:
    string rentalPricePerDay;
    string registrationNumber;

public:
    void setRentalPricePerDay(const string &rentalPricePerDay);
    void setRegistrationNumber(const string &registrationNumber);
    const string &getRentalPricePerDay() const;
    const string &getRegistrationNumber() const;
    void vehicleInfo();
    Vehicle();
    Vehicle(string _rentalPricePerDay, string _registrationNumber);
    void setVehicle();
    void setVehicle(Vehicle *vehicle);
    friend ostream& operator << ( std::ostream& outs, const Vehicle& vehicle);
};


#endif //CAR_RENTAL_VEHICLE_H
