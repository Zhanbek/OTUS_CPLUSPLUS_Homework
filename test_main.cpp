#define BOOST_TEST_MODULE test_version

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_case1)
{
	BOOST_CHECK(getVersionPatch() > 0);
}

BOOST_AUTO_TEST_CASE(test_case2)
{
	BOOST_WARN(getVersionPatch() > 40);
}

BOOST_AUTO_TEST_SUITE_END()
