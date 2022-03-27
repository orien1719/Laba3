#include <iostream>
#include <string>

#include "Water.h"

using namespace std;


void WaterTransport::Fuel()
{
  cout << "Water" << endl;
}

WaterTransport::WaterTransport(double price, int Capacity, int power, string color) : transport(power, color)
{
  this->price = price;
  this->Capacity = Capacity;
}

int WaterTransport::getCapacity()
{
  return Capacity;
}

void WaterTransport::setCapacity(int enCapacity)
{
  if (enCapacity > 0)
  {
    Capacity = enCapacity;
  }
}

int WaterTransport::getprice()
{
  return price;
}

void WaterTransport::setprice(int enprice)
{
  if (enprice > 0)
  {
    price = enprice;
  }
}