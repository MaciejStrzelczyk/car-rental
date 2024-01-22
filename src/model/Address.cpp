
#include <iostream>
#include <utility>
#include "../../include/model/Address.h"
using namespace std;

Address::Address(string _city, string _street, string _houseNumber, string _posCode)
{
    cout << "Create Address" << endl;
    this->city = move(_city);
    this->street = move(_street);
    this->hauseNumber = move(_houseNumber);
    this->posCode = move(_posCode);
}

const string &Address::getCity() const
{
    return this->city;
}

const string &Address::getStreet() const
{
    return this->street;
}

const string &Address::getHauseNumber() const
{
    return this->hauseNumber;
}

const string &Address::getPosCode() const
{
    return this->posCode;
}

void Address::setCity(const string &city)
{
    Address::city = city;
}

void Address::setStreet(const string &street)
{
    Address::street = street;
}

void Address::setHauseNumber(const string &hauseNumber)
{
    Address::hauseNumber = hauseNumber;
}

void Address::setPosCode(const string &posCode)
{
    Address::posCode = posCode;
}

void Address::addressInfo()
{
    cout << "\n\r" << "City: " << this->city << "\n\r" << "street: " << this->street << "\n\r" << "House number: " << this->hauseNumber << "\n\r" << "Post code: " << this->posCode << endl;
}

ostream& operator << ( std::ostream& outs, const Address& address )
{
    return outs << "\n\r" << "City: " << address.getCity() << "\n\r" << "street: " << address.getStreet() << "\n\r" << "House number: " << address.getHauseNumber() << "\n\r" << "Post code: " << address.getPosCode() << endl;
}


//Address::Address()
//{
//    cout << "Create Address" << endl;
//}



