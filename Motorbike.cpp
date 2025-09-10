#include "Motorbike.h"
Motorbike::Motorbike(int id) : Vehicle(id){}
std::time_t Motorbike::getParkingDuration(){
    std::time_t duration=Vehicle::getParkingDuration();
    return duration*0.85;
}