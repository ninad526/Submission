#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <ctime>
int main(){
    Vehicle* parkingLot[3]; 
    int type, id;
    for (int i=0;i<3;i++){
        std::cout << "Enter vehicle type (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> type;
        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        switch (type){
            case 1:
                parkingLot[i]=new Car(id);
                break;
            case 2:
                parkingLot[i]=new Bus(id);
                break;
            case 3:
                parkingLot[i]=new Motorbike(id);
                break;
         }
    }
    for (int i=0;i<3;i++){
        std::time_t duration = parkingLot[i]->getParkingDuration();
        std::cout << "Vehicle ID " << parkingLot[i]->getID() << " has been parked for " << duration << " seconds.\n";
    }
    
        delete parkingLot[1];
        delete parkingLot[2];
        delete parkingLot[3];
    

    return 0;
}

