//Que Link:- https://leetcode.com/problems/design-parking-system/

class ParkingSystem {
public:
    unordered_map<int,int> a;
    ParkingSystem(int big, int medium, int small) {
        a.insert({1,big});
        a.insert({2,medium});
        a.insert({3,small});
    }
    
    bool addCar(int carType) {
        if(a[carType]>0){
            a[carType]-=1;
            return true;
        }else{
            return false;
        }
    }
};
