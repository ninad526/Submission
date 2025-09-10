#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
class ParkingLot{
private:
    Vehicle** vehicles;
    int capacity;
    int count;
    
public:
    ParkingLot(int capacity);
    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int vehicleID);
    int getCount();
    ~ParkingLot();
    int countOverstayingVehicles(int maxParkingDuration);
};
#endif