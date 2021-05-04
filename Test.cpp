#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Scientist.hpp"
#include "Researcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "GeneSplicer.hpp"
#include "FieldDoctor.hpp"
#include "doctest.h"

using namespace pandemic;
Board board;

TEST_CASE("Functions") {
    CHECK(board.is_clean() == true);
    board[City::Chicago] = 2;
    OperationsExpert oe {board, City::Chicago};
    Medic med {board, City::Chicago};
    Dispatcher dis {board, City::Chicago};

    CHECK_NOTHROW(oe.drive(City::Chicago));
    CHECK_NOTHROW(oe.fly_direct(City::Chicago));
    CHECK_NOTHROW(oe.fly_charter(City::Chicago));
    CHECK_NOTHROW(oe.fly_shuttle(City::Chicago));
    CHECK_NOTHROW(oe.build());
    CHECK_NOTHROW(oe.treat(City::Chicago));
    CHECK_NOTHROW(oe.take_card(City::Chicago));

    CHECK(board.is_clean() == false);
    med.treat(City::Chicago);
    CHECK(board.is_clean() == true);

    board[City::Chicago] = 4;
    Scientist sci {board, City::Chicago,2};
    sci.treat(City::Chicago);
    sci.treat(City::Chicago);
    sci.treat(City::Chicago);
    CHECK(board.is_clean() == false);
    sci.treat(City::Chicago);
    CHECK(board.is_clean() == true);

    dis.take_card(City::Algiers);
    CHECK_NOTHROW(dis.fly_direct(City::Algiers));
    CHECK_NOTHROW(dis.build());
    dis.take_card(City::MexicoCity);
    CHECK_NOTHROW(dis.fly_direct(City::MexicoCity));

    Virologist viro {board, City::London};
    board[City::Madrid] = 1;
    CHECK(board.is_clean() == false);
    CHECK_NOTHROW(viro.drive(City::London));
    CHECK_NOTHROW(viro.fly_direct(City::London));
    CHECK_NOTHROW(viro.fly_charter(City::London));
    CHECK_NOTHROW(viro.fly_shuttle(City::London));
    CHECK_NOTHROW(viro.take_card(City::Madrid));
    CHECK_NOTHROW(viro.build());
    CHECK_NOTHROW(viro.treat(City::Madrid));
    CHECK(board.is_clean() == true);

}
TEST_CASE("Roles - Player types") {
    OperationsExpert opExp {board, City::NewYork};
    CHECK_EQ(opExp.role(), "OperationsExpert");

    Dispatcher dispa {board, City::NewYork};
    CHECK_EQ(dispa.role(), "Dispatcher");

    Scientist scient {board, City::NewYork, 2};
    CHECK_EQ(scient.role(), "Scientist");

    Researcher resea {board, City::NewYork};
    CHECK_EQ(resea.role(), "Researcher");

    Medic medi {board, City::NewYork};
    CHECK_EQ(medi.role(), "Medic");

    Virologist virolo {board, City::NewYork};
    CHECK_EQ(virolo.role(), "Virologist");

    GeneSplicer geneS {board, City::NewYork};
    CHECK_EQ(geneS.role(), "GeneSplicer");

    FieldDoctor fieldD {board, City::NewYork};
    CHECK_EQ(fieldD.role(), "FieldDoctor");
}



