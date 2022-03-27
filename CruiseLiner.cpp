#include <iostream>
#include <string>

#include "Cruise_Liner.h"

using namespace std;


void CruiseLiner::Petrol()
{
  cout << "Water (CruiseLiner)" << endl;
}

CruiseLiner::CruiseLiner(string Name, int Speed) : WaterTransport(price,Capacity, power, color)
{
  this->Deck = Deck;
  this->Speed = Speed;
}

string CruiseLiner::getDeck()
{
  return Deck;
}

void CruiseLiner::setDeck(string enDeck)
{
  if (enDeck != "")
  {
    Deck = enDeck;
  }

}

int CruiseLiner::getSpeed()
{
  return Speed;
}

void CruiseLiner::setSpeed(int enSpeed)
{
  if (enSpeed > 0)
  {
    Speed = enSpeed;
  }
}