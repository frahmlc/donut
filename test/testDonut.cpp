#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE "DonutModule"

#include <boost/test/unit_test.hpp>
#include <cmath>
#include "../src/donut.h"
#include "../src/position.h"

double NUMERICAL_TOLERANCE = 1e-8;

BOOST_AUTO_TEST_CASE( construction ) {
	Position center(0.0, 0.0);
	Donut donut(0.0, center);
	BOOST_CHECK(&donut > 0);
}

BOOST_AUTO_TEST_CASE( positioning ) {
	Position center(0.0, 0.1);
	Donut donut(0.1, center);
	BOOST_CHECK(donut.getCenter() == center);

	Position newCenter(0.0, 0.0);
	donut.setCenter(newCenter);
	BOOST_CHECK(donut.getCenter() == newCenter);
}

BOOST_AUTO_TEST_CASE( calculation )
{
	Position center(0.0, 0.0);
	Donut donut(0.1, center);
	Position x(0.0, 0.1);
	BOOST_CHECK(donut.valueAt(center) == 0.0);
	BOOST_CHECK(donut.valueAt(x) == 1.0);
}
