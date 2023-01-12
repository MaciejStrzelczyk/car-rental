#include <boost/test/unit_test.hpp>
#include "../include/model/Client.h"
#include "../include/model/Address.h"

BOOST_AUTO_TEST_SUITE(TestSuiteCorrect)


BOOST_AUTO_TEST_SUITE_END()

    BOOST_AUTO_TEST_CASE(ClientCaseGetFirstName) {
            Address *address = new Address("Pierwsza_ulica","1");
            std::shared_ptr<Address> address1(address);
            Address *registeredAddress = new Address("Druga_ulica","2");
            std::shared_ptr<Address> registeredAddress1(registeredAddress);
            Client client("Jan", "Kowalski", "1234567890", address1, registeredAddress1);
            BOOST_REQUIRE_EQUAL(client.getFirstName(),"Jan");
    }