#include <string>
#include <iostream>
using namespace std;

#ifndef CAR_RENTAL_ADDRESS_H
#define CAR_RENTAL_ADDRESS_H

class Address
{
private:
    string city;
    string street;
    string hauseNumber;
    string posCode;
public:
    void setCity(const string &city);

    void setStreet(const string &street);

    void setHauseNumber(const string &hauseNumber);

    void setPosCode(const string &posCode);
//    Address();
    Address(string _city = "-", string _street = "-", string _houseNumber = "-", string _posCode = "-");
    const string &getCity() const;
    const string &getStreet() const;
    const string &getHauseNumber() const;
    const string &getPosCode() const;
    void addressInfo();
    friend ostream& operator << ( std::ostream& outs, const Address& address );

};

#endif //CAR_RENTAL_ADDRESS_H
