#include <iostream>
#include "Animal.hpp"
using namespace std;

Animal::Animal()
{
    name_ = "";
    domestic_ = false;
    predator_ = false;
}
Animal::Animal(string animalName, bool isDomestic, bool isPredator)
{
    name_ = animalName;
    domestic_ = isDomestic;
    predator_= isPredator;
}
string Animal::getName() const
{
  return name_;
}
bool Animal::isDomestic() const
{
   return domestic_;
}
bool Animal::isPredator() const
{
    return predator_;
}
void Animal::setName(string name)
{
    name_ = name;
}
void Animal::setDomestic()
{
    domestic_ = true;
}
void Animal::setPredator()
{
    predator_ = true;
}




