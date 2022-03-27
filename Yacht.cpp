#include <iostream>
#include <string>

#include "Yacht.h"

using namespace std;


void Yacht::Petrol()
{
  cout << "Water (Yacht)" << endl;
}

Yacht::Yacht(int Speed, string Name) : WaterTransport(price,Capacity, power,color)
{
  this->Speed = Speed;
  this->Deck = Deck;
}

string Yacht::getDeck()
{
  return Deck;
}

void Yacht::setDeck(string enDeck)
{
  if (enDeck != "")
  {
    Deck = enDeck;
  }

}

int Yacht::getSpeed()
{
  return Speed;
}

void Yacht::setSpeed(int enSpeed)
{
  if (enSpeed > 0)
  {
    Speed = enSpeed;
  }
}