/**
 * Run:
 *     g++ -Wall test.cpp -lboost_unit_test_framework -o test && ./test
 *
 * */

#define BOOST_TEST_MODULE my-algorithm
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "my-algorithm.hpp"

BOOST_AUTO_TEST_CASE(in)
{
    BOOST_TEST(find(1).in() == false);
    BOOST_TEST(find(1).in(1, 2) == true);
    BOOST_TEST(find(2).in(1, 2, 3, 4) == true);
    BOOST_TEST(find(5).in(1, 2, 3, 4, 5, 6) == true);
    BOOST_TEST(find(7).in(1, 2, 3, 4, 5, 6) == false);
}
