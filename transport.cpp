#include <iostream>
#include <string>
#include "transport.h"

using namespace std;

void transport::Petrol()
{
  cout << "UsingPetrol" << endl;
}

transport::transport(int power,string color)
{
  this->power = power;
  this->color = color;
}

int transport::getPower()
{
  return power;
}

void transport::setPower(int enPower)
{
  if (enPower > 0)
  {
    power = enPower;
  }
}

string transport::getColor()
{
  return color;
}

void transport::setColor(string enColor)
{
  if (enColor != "")
  {
    color = enColor;
  }
}