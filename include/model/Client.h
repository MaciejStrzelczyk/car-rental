#include <string>
#include <iostream>
#include "../../include/model/Address.h"
#include "../../include/model/Vehicle.h"

using namespace std;


#ifndef CAR_RENTAL_CLIENT_H
#define CAR_RENTAL_CLIENT_H

class Client
{
    private:
        string firstName;
        string lastName;
        string personalID;
        Address* address;
        Vehicle* vehicle;



    public:
        Client();
        Client(string _firstName, string _lastName, string _personalID, Address* _address, Vehicle* _vehicle);
        Client(string _firstName, string _lastName, string _personalID, Address* _address);
        Client(string _firstName, string _lastName, string _personalID);
        ~Client();
        void clientInfo();
        void setFirstName(const string &firstName);
        void setLastName(const string &lastName);
        void setAddress(Address *address);
        void setVehicle(Vehicle* vehicle);
        void setAddress(string _city, string _street, string _houseNumber, string _posCode );
        void setVehicle(string _rentalPricePerDay, string _registrationNumber);
        Address *getAddress() const;

};



#endif //CAR_RENTAL_CLIENT_H
