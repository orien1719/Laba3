#pragma once
#include <iostream>
#include <string>

#include "Water.h"

using namespace std;

class CruiseLiner : public WaterTransport
{

public:

  virtual void Petrol();

  CruiseLiner(string Deck, int Speed);

  string getDeck();
  void setDeck(string enDeck);

  int getSpeed();
  void setSpeed(int enSpeed);


protected:

  string Deck = "";
  int Speed = 0;
};