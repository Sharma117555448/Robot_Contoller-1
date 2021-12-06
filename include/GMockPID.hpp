/**
 * @file testGMockPID.cpp
 * @authors Charu Sharma
 * @brief mock file for testing
 * @date 2021-11-30
 * @copyright Copyright (c) 2021
 *
 */
#ifndef INCLUDE_GMOCKPID_HPP_
#define INCLUDE_GMOCKPID_HPP_

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <pid.hpp>

class MockPID : public PID {
pulic:
    /// pGain proportional gain
    /// @return true/false
    MOCK_METHOD1(setKp, bool(double pGain));

    /// dGain diffrential gain
    /// @return true/false
    MOCK_METHOD1(setKd, bool(double dGain));

    /// iGain integral gain
    /// @return true/false
    MOCK_METHOD1(setKi, bool(double iGain));

    /// velocity target velocity of the robot
    /// @return true/false
    MOCK_METHOD1(setTargetVelocity, bool(double velocity));

    /// compute currentVelocity current velocity of the robot
    /// @return newVelocity
    MOCK_METHOD2(ComputePID, double(double currentVelocity, double t);

};
#endif  // INCLUDE_GMOCKPID_HPP_
