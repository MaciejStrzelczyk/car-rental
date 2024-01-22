#include <string>
#include <iostream>
#include <utility>
#include "../../include/model/Address.h"
#include "../../include/model/Vehicle.h"
#include "../../include/model/Client.h"

using namespace std;

Client::Client()
{
    cout << "basic Constructor" << endl;
}

Client::Client(string _firstName, string _lastName, string _personalID, Address* _address, Vehicle* _vehicle)
{
    this->firstName = std::move(_firstName);
    this->lastName = std::move(_lastName);
    this->personalID = std::move(_personalID);
    this->address = _address;
    this->vehicle = _vehicle;

    cout << "Constructor Client with parameters" << endl;
}

Client::Client(string _firstName, string _lastName, string _personalID, Address* _address)
{
    this->firstName = std::move(_firstName);
    this->lastName = std::move(_lastName);
    this->personalID = std::move(_personalID);
    this->address = _address;


    cout << "Constructor with parameters" << endl;
}

Client::Client(string _firstName, string _lastName, string _personalID)
{
    this->firstName = std::move(_firstName);
    this->lastName = std::move(_lastName);
    this->personalID = std::move(_personalID);


    cout << "Constructor with parameters" << endl;
}

Client::~Client()
{
    cout << "Destructor" << endl;
}

Address *Client::getAddress() const {
    return address;
}

void Client::setAddress(Address *address)
{
    Address* address1 = new Address;
    *address1 = *address;
    Client::address = address1;
}

void Vehicle::setVehicle(Vehicle* vehicle)
{
    Vehicle* vehicle1 = new Vehicle();
    *vehicle1 = *vehicle;
    vehicle = vehicle1;
}

void Client::setAddress(string _city, string _street, string _houseNumber, string _posCode )
{
    Client::address = new Address(_city, _street, _houseNumber, _posCode);
}


void Client::setFirstName(const string &firstName) {
    Client::firstName = firstName;
}

void Client::setLastName(const string &lastName) {
    Client::lastName = lastName;
}

void Client::setVehicle(string _rentalPricePerDay, string _registrationNumber)
{
    vehicle = new Vehicle(_rentalPricePerDay, _registrationNumber);
}

void Client::clientInfo()
{
    cout << "Client: " << this->firstName << "\n\r" << "First name: " << this->firstName << "\n\r" << "last name: " << this->lastName << "\n\r" << "ID: " <<  this->personalID << "\n\r" << *this->address << *this->vehicle << endl;
}

