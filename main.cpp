#include <iostream>
#include "include/model/Client.h"
#include "include/model/Address.h"
#include "include/model/Vehicle.h"
#include "include/model/Rent.h"
using namespace std;

int main() {

    Client* client = new Client("Adam", "Kowalski", "12345678");
    client->setAddress("Lodz", "Biala", "2", "92-213");
    client->setVehicle("123","EL8P98");
    client->clientInfo();
    Rent* rent = new Rent();
    rent->generateUuid();

    return 0;
}
