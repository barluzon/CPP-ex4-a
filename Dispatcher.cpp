#include "Dispatcher.hpp"
#include "string"
#include "Player.hpp"

using namespace std;
using namespace pandemic;

namespace pandemic{

    Dispatcher::Dispatcher(const Board &board, const City &city):Player(board, city){}

    string Dispatcher::role(){
        return "Name:";
    }
    Player &Dispatcher::fly_direct(const City &city){
        return *this;
    }
}