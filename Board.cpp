#include "Board.hpp"
using namespace std;

namespace pandemic{

    int &Board::operator[](City city){
        return this->cities[city];
    }
    ostream &operator<<(ostream &out, const Board &board){
        return out;
    }
    bool Board::is_clean(){
        return true;
    }
    void Board::remove_cures(){}
}