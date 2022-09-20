#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Factorials are computed", "[factorial]") {
    CHECK(Factorial(0) == 1);
    CHECK(Factorial(1) == 1);
    CHECK(Factorial(2) == 2);
    CHECK(Factorial(10) == 3628800);
}

TEST_CASE("Sign is evaluated", "[Sign]") {
    CHECK(Sign(-1) == -1);
    CHECK(Sign(1) == 1);
    CHECK(Sign(-19874) == -1);
    CHECK(Sign(0) == 0);
}

TEST_CASE("NthFibonacci is evaluated", "[NthFibonacci]") {
    CHECK(NthFibonacci(1) == 1);
    CHECK(NthFibonacci(2) == 1);
    CHECK(NthFibonacci(4) == 3);
    CHECK(NthFibonacci(6) == 8);
}

TEST_CASE("Product is evaluated", "[Product]") {
    std::vector<int> one = {1,2,3};
    std::vector<int> two = {4,2,2};
    std::vector<int> three = {2,3,3};
    CHECK(Product(one) == 6);
    CHECK(Product(two) == 16);
    CHECK(Product(three) == 18);
}

