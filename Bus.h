#pragma once
#include "Ground.h"
#include <string>

using namespace std;

class Bus : public Ground
{
public:
  virtual void Petrol();
  int getMaxPassengers();
  void setMaxPassengers(int enMaxPassengers);
  int getFare();
  void setFare(int enFare);
protected:
  int maxPassengers = 0;
  int fare = 0;
};