#include "Virologist.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic {

    Virologist::Virologist(const Board &board, const City &city): Player(board, city){}
        string Virologist::role() {
        return "Name";
    }
    Player &Virologist::treat(const City &city) {
        return *this;
    }
}