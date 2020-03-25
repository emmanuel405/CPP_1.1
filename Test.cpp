#include <iostream>
#include <string>

#include "doctest.h"
#include "PhoneticFinder.hpp"

using namespace phonetic;

using namespace std;
/*
changement of letters:
v w //
b f p //
g j //
c k q //
s z //
d t //
o u //
i y //
*/

TEST_CASE("Test replacement of lower-case and upper-case & Test replacement of c and k and q f and b and p o and u") {
    string text = "Coffe xxx yyy";
    CHECK(find(text, "Coffe") == string("Coffe"));
    CHECK(find(text, "coffe") == string("Coffe"));
    CHECK(find(text, "COFFE") == string("Coffe"));
    CHECK(find(text, "coFfE") == string("Coffe"));

    CHECK(find(text, "Koffe") == string("Coffe"));
    CHECK(find(text, "Qoffe") == string("Coffe"));   
    CHECK(find(text, "CuFFe") == string("Coffe"));
    CHECK(find(text, "Cubbe") == string("Coffe"));
    CHECK(find(text, "Quppe") == string("Coffe"));

    CHECK(find(text, "QUPPE") == string("Coffe"));
    CHECK(find(text, "KOBBE") == string("Coffe"));
}

TEST_CASE("Test replacement of b and f and p o and u t and d") {
    string text = "xxx brother yyy";
    CHECK(find(text, "brother") == string("brother"));
    CHECK(find(text, "frother") == string("brother"));
    CHECK(find(text, "prother") == string("brother"));
    CHECK(find(text, "brodher") == string("brother"));
    CHECK(find(text, "bruther") == string("brother"));
    
    CHECK(find(text, "frudher") == string("brother"));
    CHECK(find(text, "pruther") == string("brother"));
    CHECK(find(text, "prodher") == string("brother"));
    CHECK(find(text, "frodher") == string("brother"));
}

TEST_CASE("Test replacement of lower-case and upper-case & Test replacement of w and v g and j") {
    string text = "xxx warning yyy";
    CHECK(find(text, "warning") == string("warning"));
    CHECK(find(text, "WArniNG") == string("warning"));
    CHECK(find(text, "varning") == string("warning"));
    CHECK(find(text, "warninj") == string("warning"));
    CHECK(find(text, "varninj") == string("warning"));
    CHECK(find(text, "VaRniNG") == string("warning"));
    CHECK(find(text, "VARNINJ") == string("warning"));
    CHECK(find(text, "WARNING") == string("warning"));
}

TEST_CASE("Test replacement of lower-case and upper-case & Test replacement of s and z d and t o and u"){
    string text = "xxx stone yyy";
    CHECK(find(text, "stone") == string("stone"));
    CHECK(find(text, "STONE") == string("stone"));
    CHECK(find(text, "stONe") == string("stone"));
    CHECK(find(text, "Stone") == string("stone"));
    
    CHECK(find(text, "ztone") == string("stone"));
    CHECK(find(text, "Ztone") == string("stone"));
    CHECK(find(text, "ZTONE") == string("stone"));

    CHECK(find(text, "sdone") == string("stone"));
    CHECK(find(text, "sDone") == string("stone"));
    CHECK(find(text, "SDONE") == string("stone"));

    CHECK(find(text, "stune") == string("stone"));
    CHECK(find(text, "stUne") == string("stone"));
    CHECK(find(text, "STUNE") == string("stone"));

    CHECK(find(text, "ZDUNE") == string("stone"));
    CHECK(find(text, "zdune") == string("stone"));
}

TEST_CASE("Test replacement of lower-case and upper-case & Test replacement of i and y") {
    string text = "xxx ishay yyy";
    CHECK(find(text, "ishay") == string("ishay"));
    CHECK(find(text, "ishai") == string("ishay"));
    CHECK(find(text, "yshay") == string("ishay"));
    CHECK(find(text, "yshai") == string("ishay"));

    CHECK(find(text, "Ishay") == string("ishay"));
    CHECK(find(text, "ISHAY") == string("ishay"));
    CHECK(find(text, "ySHAy") == string("ishay"));
    CHECK(find(text, "YshaI") == string("ishay"));
}
    
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Kingdom xxx yyy";
    CHECK(find(text, "Kingdom") == string("Kingdom"));
    CHECK(find(text, "kingdom") == string("Kingdom"));
    CHECK(find(text, "KINGDOM") == string("Kingdom"));
    CHECK(find(text, "KingdOM") == string("Kingdom"));
    CHECK(find(text, "kINGDOM") == string("Kingdom"));
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "xxx nevohadnetsar yyy";
    CHECK(find(text, "nevohadnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "NEVOHADNETSAR") == string("nevohadnetsar"));
    CHECK(find(text, "Nevohadnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "nevohadNETSAR") == string("nevohadnetsar"));
    CHECK(find(text, "NEVOHADnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "nEvOhAdnETsaR") == string("nevohadnetsar"));
    CHECK(find(text, "neVOHADnetsAR") == string("nevohadnetsar"));
}

TEST_CASE("Test replacement of v and w d and t o and u s and z") {
    string text = "xxx nevohadnetsar yyy";
    CHECK(find(text, "nevohadnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "nevuhadnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "nevohatnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "nevuhatnedsar") == string("nevohadnetsar"));
    CHECK(find(text, "newohadnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "newohatnetsar") == string("nevohadnetsar"));
    CHECK(find(text, "newuhatnedsar") == string("nevohadnetsar"));
    
    CHECK(find(text, "nevohadnetzar") == string("nevohadnetsar"));
    CHECK(find(text, "nevuhadnetzar") == string("nevohadnetsar"));
    CHECK(find(text, "nevohatnetzar") == string("nevohadnetsar"));
    CHECK(find(text, "nevuhatnedzar") == string("nevohadnetsar"));
    CHECK(find(text, "newohadnetzar") == string("nevohadnetsar"));
    CHECK(find(text, "newohatnetzar") == string("nevohadnetsar"));
    CHECK(find(text, "newuhatnedzar") == string("nevohadnetsar"));
}

TEST_CASE("Test replacement of lower-case and upper-case & Test replacement of p and b and f o and u") {
    string text = "Pharaon xxx yyy";
    CHECK(find(text, "Pharaon") == string("Pharaon"));
    CHECK(find(text, "pharaon") == string("Pharaon"));
    CHECK(find(text, "PHARAON") == string("Pharaon"));
    CHECK(find(text, "PhARaOn") == string("Pharaon"));
    CHECK(find(text, "pHarAoN") == string("Pharaon"));
    CHECK(find(text, "fharaon") == string("Pharaon"));
    CHECK(find(text, "Fharaon") == string("Pharaon"));
    CHECK(find(text, "bharaon") == string("Pharaon"));
    CHECK(find(text, "Bharaon") == string("Pharaon"));
    CHECK(find(text, "PharaUn") == string("Pharaon"));
    CHECK(find(text, "FHARAUN") == string("Pharaon"));
}

TEST_CASE("Test replacement of lower-case and upper-case & Test replacement of q and j i and y u and o") {
    string text = "xxx jericho yyy";
    CHECK(find(text, "jericho") == string("jericho"));
    CHECK(find(text, "qericho") == string("jericho"));
    CHECK(find(text, "jerichu") == string("jericho"));
    CHECK(find(text, "jerycho") == string("jericho"));
    CHECK(find(text, "qerychu") == string("jericho"));
    CHECK(find(text, "qerycho") == string("jericho"));
    CHECK(find(text, "JERICHO") == string("jericho"));
    CHECK(find(text, "JERYcho") == string("jericho"));
    CHECK(find(text, "jeRICHo") == string("jericho"));
    CHECK(find(text, "jErIcHU") == string("jericho"));
    CHECK(find(text, "QerYchU") == string("jericho"));
    CHECK(find(text, "JErychu") == string("jericho"));
}