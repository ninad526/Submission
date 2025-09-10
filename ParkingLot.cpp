#include "ParkingLot.h"
ParkingLot::ParkingLot(int cap) : capacity(cap), count(0) {
    vehicles=new Vehicle*[capacity];
    for (int i=0;i<capacity;i++){
        vehicles[i]=nullptr;
    }
}
ParkingLot::~ParkingLot(){
    for (int i=0;i<capacity;i++){
        if(vehicles[i]!=nullptr){
        delete vehicles[i];}
    }
    delete[] vehicles;
}   
bool ParkingLot::parkVehicle(Vehicle* vehicle){
    if (count>=capacity){
        std::cout << "The lot is full" << std::endl;
        return false;
    }else{
        for (int i=0;i<capacity;i++){
            if (vehicles[i]==nullptr){
                vehicles[i]=vehicle;
                count++;
                return true;
            }
        }
    }
}

bool ParkingLot::unparkVehicle(int vehicleID){
    for (int i=0;i<capacity;i++){
        if (vehicles[i]!=nullptr && vehicles[i]->getID()==vehicleID) {
            delete vehicles[i];
            vehicles[i]=nullptr;
            count--;
            return true;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return false;
}

int ParkingLot::getCount(){
    return count;
}
int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int count1=0;
    for (int i=0;i<capacity;i++){
        if (vehicles[i]!=nullptr && vehicles[i]->getParkingDuration()>maxParkingDuration){
            count1++;
        }
    }
    return count1;
}
