#include "GeneSplicer.hpp"
#include "Player.hpp"
#include "string"
using namespace std;

namespace pandemic{

    GeneSplicer:: GeneSplicer(const Board &board, const City &city):Player(board, city){}

    string GeneSplicer::role(){
        return "Name:";
    }
    Player &GeneSplicer::discover_cure(const Color &color){
        return *this;
    }
}