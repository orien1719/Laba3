#pragma once
#include <iostream>
#include <string>

#include "Transport.h"

using namespace std;

class WaterTransport : public transport {

public:

  virtual void Fuel();

  WaterTransport(double price, int Capacity, int power, string color);

  int getCapacity();
  void setCapacity(int enCapacity);

  int getprice();
  void setprice(int enprice);

protected:

  int price = 0;
  int Capacity = 0;

};