#include <catch2/catch_all.hpp>
#include "library/block1/block1.hpp"

TEST_CASE("add_block1") {
  REQUIRE(add_block1(2, 0) == 2);
}
