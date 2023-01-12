#include <iostream>
#include "include/model/Client.h"
#include "include/model/Address.h"
using namespace std;

int main() {

    Client *client2 = new Client("Adam", "Kowalski", "12345678");

    client2->setAddress("Lodz", "Biala", "2", "92-213");
    client2->clientInfo();


    return 0;
}
