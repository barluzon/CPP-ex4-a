#include "Researcher.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic{

    Researcher::Researcher(const Board &board, const City &city): Player(board, city){}

        string Researcher::role() {
        return "Name";
    }
    Player &Researcher::discover_cure(const Color &color) {
        return *this;
    }
}