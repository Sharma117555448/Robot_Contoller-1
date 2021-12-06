// Copyright (c) 2021 Charu Sharma and Vivek Sood
// Licensed under the MIT License.


/// @file   pid.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Phase1- Driver: Vivek Sood Navigator: Charu Sharma
/// @brief Phase2- Driver: Charu Sharma Navigator: Vivek Sood

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

#include <iostream>

/// @class PID
/// @brief Implementation of a PID controller
class PID {
 public:
    /// @brief Constructor for PID class.
    PID();
    /// @brief Destructor for PID class.
    virtual ~PID();

    /// @brief Setter for proportional gain.
    /// @param[in] pGain proportional gain
    /// @return true/false
    virtual bool setKp(double pGain);

    /// @brief Setter for diffrential gain.
    /// @param[in] dGain diffrential gain
    /// @return true/false
    virtual bool setKd(double dGain);

    /// @brief Setter for integral gain.
    /// @param[in] iGain integral gain
    /// @return true/false
    virtual bool setKi(double iGain);

    /// @brief Setter for targetVelocity.
    /// @param[in] velocity target velocity of the robot
    /// @return true/false
    virtual bool setTargetVelocity(double velocity);

    /// @brief Computes the control output using PID controller
    /// @param[in] currentVelocity current velocity of the robot
    /// @return newVelocity
    virtual double computePID(double currentVelocity, double t);

 private:
    double kp;
    double ki;
    double kd;
    double cumulativeError;
    double prevError;
    double targetVelocity;
};

#endif  // INCLUDE_PID_HPP_
