#include "Bus.h"
Bus::Bus(int id) : Vehicle(id){}
std::time_t Bus::getParkingDuration(){
    std::time_t duration=Vehicle::getParkingDuration();
    return duration*0.75;
}