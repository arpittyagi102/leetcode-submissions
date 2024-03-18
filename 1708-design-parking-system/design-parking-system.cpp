class ParkingSystem {
public:
    vector<int> parkingSpace{0,0,0,0};

    ParkingSystem(int big, int medium, int small) {
        parkingSpace[1] = big;
        parkingSpace[2] = medium;
        parkingSpace[3] = small;
    }
    
    bool addCar(int carType) {
        if(parkingSpace[carType] > 0){
            parkingSpace[carType] --;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */