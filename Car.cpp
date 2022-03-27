#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

void Cars::Petrol()
{
  cout << "Ground (Cars)" << endl;
}


Cars::Cars(double maxSpeed, string gearbox) : Ground (Deck,  wheels,  power,  color)
{
  this->maxSpeed = maxSpeed;
  this->gearbox = gearbox;
}
string Cars::getGearbox()
{
  return gearbox;
}

void Cars::setGearbox(string enGearbox)
{
  if (enGearbox != "")
  {
    gearbox = enGearbox;
  }
}
double Cars::getMaxSpeed()
{
  return maxSpeed;
}

void Cars::setMaxSpeed(double enMaxSpeed)
{
  if (enMaxSpeed != 0.0)
  {
    maxSpeed = enMaxSpeed;
  }
}