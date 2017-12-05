#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "PositionModule"

#include <boost/test/unit_test.hpp>
#include <cmath>
#include "../src/position.h"

double NUMERICAL_TOLERANCE = 1e-8;

BOOST_AUTO_TEST_CASE( equality ) {
	Position x(0.0, 0.0);
	Position x2(0.0, 0.0);
	BOOST_CHECK(x == x2);
}

BOOST_AUTO_TEST_CASE( distance ) {
	Position x(0.0, 0.0);
	Position x2(0.0, 1.0);
	BOOST_CHECK(x.getY() == 0.0);
	BOOST_CHECK(x2.getY() == 1.0);
	BOOST_CHECK(abs(x.distanceTo(x2) - 1.0) < NUMERICAL_TOLERANCE);
}
