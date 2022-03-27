#pragma once
#include <iostream>
#include <string>

#include "Water.h"

using namespace std;

class Yacht : public WaterTransport
{

public:

  virtual void Petrol();

  Yacht(int Speed, string Deck);

  string getDeck();
  void setDeck(string enDeck);

  int getSpeed();
  void setSpeed(int enSpeed);


protected:

  string Deck = "";
  int Speed = 0;
};