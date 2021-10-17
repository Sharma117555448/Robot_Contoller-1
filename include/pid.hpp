// Copyright (c) No idea about this :). No copyright.
// Licensed under the MIT License.


/// @file   pid.hpp
/// @authors Vivek Sood, Charu Sharma
/// @brief Driver: Vivek Sood Navigator: Charu Sharma
/// @date   2021-10-16

#ifndef PID_HPP_
#define PID_HPP_

#include <iostream>

/// @class PIDController
/// @brief Implementation of a PID controller
class PID {
 public:
    bool setKp(double pGain);
    bool setKd(double dGain);
    bool setKi(double iGain);
    bool setDt(double timeInterval);
    bool setTargetVelocity(double velocity);
    double computePID(double currentVelocity);

 private:
    double kp;
    double ki;
    double kd;
    double dt;
    double cumulativeError;
    double prevError;
    double targetVelocity;
};



#endif  // PID_HPP_
