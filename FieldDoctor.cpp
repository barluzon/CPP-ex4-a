#include "FieldDoctor.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic{
    FieldDoctor::FieldDoctor(const Board &board, const City &city):Player(board, city){}

    string FieldDoctor::role(){
        return "Name:";
    }
    Player &FieldDoctor::treat(const City &city){
        return *this;
    }
}