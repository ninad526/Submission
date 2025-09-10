#ifndef VECICLE_H
#define VECICLE_H
#include <iostream>
#include <string>
#include <ctime>
class Vehicle{
      protected:
      int ID;
      std::time_t timeOfEntry;
      public:
      Vehicle(int id);
      int getID();
      virtual std::time_t getParkingDuration();
      
};
#endif