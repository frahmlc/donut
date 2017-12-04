#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "DonutModule"

#include <boost/test/unit_test.hpp>
#include "../src/donut.h"

BOOST_AUTO_TEST_CASE( construction )
{
	Donut d1;
	BOOST_CHECK(&d1 > 0);
}
