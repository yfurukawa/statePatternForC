#ifndef CONDUCTORTEST_H_
#define CONDUCTORTEST_H_

#include <gtest/gtest.h>

extern "C" {
	#include "conductor.h"
}

class conductorTest : public ::testing::Test {
protected:
	void SetUp();
	void TearDown();

public:
	conductorTest();
	virtual ~conductorTest();

};

#endif
