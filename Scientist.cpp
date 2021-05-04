#include "Scientist.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic{

    Scientist::Scientist(const Board &board, const City &city, const int n): Player(board, city){
        this->n = n;
    }
    string Scientist::role() {
        return "Name";
    }
    Player &Scientist::discover_cure(const Color &color) {
        return *this;
    }
}