#include <iostream>
#include <string>
#include "Bus.h"

using namespace std;

void Bus::Petrol()
{
  cout << "Ground (Buses)" << endl;
}

int Bus::getMaxPassengers()
{
  return maxPassengers;
}

void Bus::setMaxPassengers(int enMaxPassengers)
{
  if (enMaxPassengers != 0)
  {
    maxPassengers = enMaxPassengers;
  }
}
int Bus::getFare()
{
  return fare;
}

void Bus::setFare(int enFare)
{
  if (enFare != 0)
  {
    fare = enFare;
  }
}