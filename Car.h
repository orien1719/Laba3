#pragma once
#include "Ground.h"
#include <string>

using namespace std;

class Cars : public Ground
{
public:
  Cars(double maxSpeed, string gearbox);
  virtual void Petrol();
  string getGearbox();
  void setGearbox(string enGearbox);
  double getMaxSpeed();
  void setMaxSpeed(double enMaxSpeed);
protected:
  double maxSpeed = 0.0;
  string gearbox = "";
  
};