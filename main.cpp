#include <iostream>
#include <stdio.h>
#include "transport.h"
#include "Yacht.h"
#include "Bus.h"
#include "Car.h"
#include "Cruise_Liner.h"
#include "Water.h"
#include "Ground.h"
#include "SetOfTransport.h"

using namespace std;

int main()
{
  Ground Mitsibishi("Mitsibishi", 4.0, 295, "blue");
  

  
  setOfTransport Cars;
  Cars.AddTransport(&Mitsibishi);
  Cars.Print();

  return 0;
}