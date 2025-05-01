//Arquivo de testes automatizados com Catch2.
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE("Verificacao números básicos", "[romanos]") {
    REQUIRE( romanos_para_decimal("I") == 1 );
    REQUIRE( romanos_para_decimal("V") == 5 );
    REQUIRE( romanos_para_decimal("X") == 10);
    REQUIRE( romanos_para_decimal("L") == 50);
    REQUIRE( romanos_para_decimal("C") == 100);
    REQUIRE( romanos_para_decimal("D") == 500);
    REQUIRE( romanos_para_decimal("M") == 1000);

}

TEST_CASE("Verificação números repetidos", "[romanos]"){
    REQUIRE( romanos_para_decimal("IIII") == -1);
    REQUIRE( romanos_para_decimal("VV") == -1);
    REQUIRE( romanos_para_decimal("XXXX") == -1);
    REQUIRE( romanos_para_decimal("LL") == -1);
    REQUIRE( romanos_para_decimal("CCCC") == -1);
    REQUIRE( romanos_para_decimal("DD") == -1);
    REQUIRE( romanos_para_decimal("MMMM") == -1);
}

TEST_CASE("Numeros para Subtrair", "[romanos]"){
    REQUIRE( romanos_para_decimal("IV") == 4);
    REQUIRE( romanos_para_decimal("IX") == 9);
}

/*
TEST_CASE( "Numeros romanos - algarismos inv�lidos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("G") == -1 );
    
    REQUIRE( romanos_para_decimal("i") == -1 );

    
}
 */
