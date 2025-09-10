#include <iostream>
#include <string>
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "Vehicle.h"
int main(){
    ParkingLot lot(10);
    Car* car1=new Car(1);
    Bus* bus1=new Bus(2); 
    Motorbike* motorbike1 = new Motorbike(3); 
    if(lot.parkVehicle(car1)) {
        std::cout << "Car parked." << std::endl;
    }
    if(lot.parkVehicle(bus1)) {
        std::cout << "Bus parked." << std::endl;
    }
    if(lot.parkVehicle(motorbike1)) {
        std::cout << "Motorbike parked." << std::endl;
    }
    std::cout << "There are " << lot.getCount() << " vehicles in the lot." << std::endl;
    if(lot.unparkVehicle(1)) {
        std::cout << "Car unparked." << std::endl;
    }
    std::cout << "There are " << lot.getCount() << " vehicles in the lot." << std::endl;
    lot.unparkVehicle(2);
    lot.unparkVehicle(3);
    return 0;
}
