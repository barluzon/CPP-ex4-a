#include "Medic.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic{

    Medic::Medic(const Board &board, const City &city): Player(board, city){}

        string Medic::role() {
        return "Name:";
    }
    Player &Medic::treat(const City &city) {
        return *this;
    }
}