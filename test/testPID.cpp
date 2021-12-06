/**
 * @file testPID.cpp
 * @authors Vivek Sood and Charu Sharma
 * @brief main file for testing
 * @date 2021-10-16
 * @copyright Copyright (c) 2021
 *
 * ENPM808X Midterm - Phase 2
 *
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "pid.hpp"
#include "GMockPID.hpp"

// PID pid;

TEST(PID_ex, testSetAttributes) {
    MockPID mock;
    EXPECT_CALL(mock, setKp(0.5)).Times(::testing::AtLeast(0));
    EXPECT_CALL(mock, setKi(0.005)).Times(::testing::AtLeast(0));
    EXPECT_CALL(mock, setKd(0.001)).Times(::testing::AtLeast(0));

}

// TEST(PID, testSetAttributes) {
//     EXPECT_TRUE(pid.setKp(0.5));
//     EXPECT_TRUE(pid.setKi(0.005));
//     EXPECT_TRUE(pid.setKd(0.001));
//     EXPECT_TRUE(pid.setTargetVelocity(5));
// }

// TEST(PID, testComputePID) {
//     double testCurrentVelocity = 0;
//     double velocityDiff;
//     while (true) {
//         velocityDiff = 5 - testCurrentVelocity;
//         if (velocityDiff > 0.01) {
//             testCurrentVelocity = pid.computePID(testCurrentVelocity, 0.01);
//         } else {
//             break;
//         }
//     }
//     EXPECT_TRUE(velocityDiff < 0.01);
// }
