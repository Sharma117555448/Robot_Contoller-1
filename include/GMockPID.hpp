/**
 * @file testGMockPID.cpp
 * @authors Charu Sharma
 * @brief mock file for testing
 * @date 2021-11-30
 * @copyright Copyright (c) 2021
 *
 */

#include <gtest/gtest.h>
#include <PID.hpp>

class MockPID : public PID {
pulic: 
    MockMethod(bool, Kp, (double), (const));
    MockMethod(bool, Kd, (double), (const));
    MockMethod(bool, Ki, (double), (const));

    MockMethod(double, ComputePID, (targetvelocity), (double), (const));
}
