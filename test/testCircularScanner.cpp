#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "DonutModule"

#include <boost/test/unit_test.hpp>
#include "../src/circularscanner.h"

double NUMERICAL_TOLERANCE = 1e-8;

BOOST_AUTO_TEST_CASE( construction ) {
	CircularScanner scanner(1.0, 2);
	BOOST_CHECK(&scanner > 0);
}

BOOST_AUTO_TEST_CASE( nextPosition ) {
	CircularScanner scanner(1.0, 2);
	Position right(1.0, 0.0);
	Position left(-1.0, 0.0);
	BOOST_CHECK(scanner.nextPosition().distanceTo(right) < NUMERICAL_TOLERANCE);
	BOOST_CHECK(scanner.nextPosition().distanceTo(left) < NUMERICAL_TOLERANCE);
	BOOST_CHECK(scanner.nextPosition().distanceTo(right) < NUMERICAL_TOLERANCE);
}
