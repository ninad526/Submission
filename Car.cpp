#include "Car.h"
Car::Car(int id) : Vehicle(id){}
std::time_t Car::getParkingDuration(){
    std::time_t duration=Vehicle::getParkingDuration();
    return duration*0.9;
}