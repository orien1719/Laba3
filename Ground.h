
#pragma once
#include "transport.h"
#include <string>

using namespace std;

class Ground : public transport
{
public:
  virtual void Petrol();
  Ground(string Deck, double wheels, int power, string color);
  string getDeck();
  void setDeck(string enDeck);
  double getWheels();
  void setWheels(double enWheels);
protected:
  string Deck = "";
  double wheels = 0.0;
};