/*
 * CalculatorTest.cpp
 *
 *  Created on: April 18 2013
 *      Author: Dylan Swartz
 */

#include "Calculator.h"
#include <CppUTest/TestHarness.h>

TEST_GROUP(Calculator) {

};

TEST(Calculator, AddTwoValues){
	Calculator c;
	CHECK_EQUAL(c.add(50, 10),60);
}



