#include <string>
#include <iostream>
#include "../../include/model/Address.h"
using namespace std;

#ifndef CAR_RENTAL_CLIENT_H
#define CAR_RENTAL_CLIENT_H
#include "Address.h"

class Client
{
    private:
        string firstName;
        string lastName;
        string personalID;
        Address* address;



    public:
        Client();
        Client(string _firstName, string _lastName, string _personalID, Address* _address);
        Client(string _firstName, string _lastName, string _personalID);
        ~Client();
        void clientInfo();
        void setFirstName(const string &firstName);
        void setLastName(const string &lastName);
        void setAddress(Address *address);
        void setAddress(string _city, string _street, string _houseNumber, string _posCode );
        Address *getAddress() const;

};



#endif //CAR_RENTAL_CLIENT_H
