#include <string>
#include <iostream>
#include <utility>
#include "../../include/model/Client.h"
#include "../../include/model/Rent.h"

#include "boost/date_time/time_zone_base.hpp"
#include "boost/random.hpp"
#include "boost/generator_iterator.hpp"
#include "boost/date_time.hpp"


using namespace std;

void Rent::generateUuid()
{
    boost::random::mt19937 rng;
    boost::random::uniform_int_distribution<> six(4,6);
    int x = six(rng);
    cout << x << endl;
    boost::posix_time::ptime timeLocal = boost::posix_time::second_clock::local_time();
    std::cout << "Current System Time = " << timeLocal << std::endl;

}