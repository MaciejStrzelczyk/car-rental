cmake_minimum_required(VERSION 3.4)
project(car-rental)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-Wall -Wpedantic -Wextra ")

add_executable(car_rental
        main.cpp
        include/model/Client.h
        src/model/Client.cpp
        src/model/Address.cpp
        include/model/Address.h
        src/model/Rent.cpp
        src/model/Vehicle.cpp
        include/model/Rent.h
        include/model/Vehicle.h
)

set(BOOST_ROOT "C:/boost_1_81_0")

find_package(Boost 1.81.0)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_VERSION: ${Boost_VERSION}")


#set(SOURCE_FILES
#        main.cpp
#        src/model/Client.cpp
#        src/model/Address.cpp)

#add_library(car-rental ${SOURCE_FILES})
#target_include_directories(car-rental PUBLIC include)
#enable_testing()

#find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

#set(SOURCE_TEST_FILES
#        test/master.cpp
#        test/ClientTest.cpp)

#add_executable (Testcar- ${SOURCE_TEST_FILES})

##dołącz bibliotekę z testowanymi klasami do programu testów
#target_link_libraries (Testcar-
#        car_rental
#        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
#        )
#
##dodaj test TestBiblioteki1. Instrukcji cmake add_test może być wiele.
##Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
#add_test(Testcar-rentali1 Testcar-
#        --report_level=detailed
#        --log_level=all
#        --color_output=yes
#        )
#add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
#        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
#        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})