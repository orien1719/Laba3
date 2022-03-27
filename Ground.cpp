#include <iostream>
#include <string>
#include "Ground.h"

using namespace std;

void Ground::Petrol()
{
  cout << "Ground" << endl;
}

Ground::Ground(string Deck, double wheels, int power, string color) : transport(power, color)
{
  this->Deck = Deck;
  this->wheels = wheels;
}
string Ground::getDeck()
{
  return Deck;
}

void Ground::setDeck(string enDeck)
{
  if (enDeck != "")
  {
    Deck = enDeck;
  }
}

double Ground::getWheels()
{
  return wheels;
}

void Ground::setWheels(double enWheels)
{
  if (enWheels != 0.0)
  {
    wheels = enWheels;
  }
}