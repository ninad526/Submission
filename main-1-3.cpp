#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
int main(){
    ParkingLot lot(5);
    Vehicle* vehicles[]={
        new Car(1),
        new Bus(2),
        new Motorbike(3)
    };
    
    for (int i=0;i<3;i++){
        bool parked=lot.parkVehicle(vehicles[i]);
        if (!parked){
            std::cerr << "Failed to park vehicle with ID " << vehicles[i]->getID() << std::endl;
        }
        vehicles[i]->getParkingDuration();
    }
    int maxParkingDuration=1800;
    std::cout << "Number of overstaying vehicles: " << lot.countOverstayingVehicles(maxParkingDuration) << std::endl;
    return 0;
    for (int i=0;i<3;i++){
            lot.unparkVehicle(vehicles[i]->getID());
    }
    return 0;
}

