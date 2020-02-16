#include <iostream> 

#include "Mammal.hpp"

#include "Bird.hpp"

#include "Fish.hpp"

using namespace std;


int main()

{

    Animal dog("Dog", true, false);

    std:cout << "the animal is"<<" "<<dog.getName()<<"/is it a domestic animal"<<"" <<dog.isDomestic()<<dog.isPredator()<<std::endl;

    dog.setDomestic();

    std::cout<<dog.isDomestic() <<std:: endl;

    dog.setPredator();

    return 0;

}

