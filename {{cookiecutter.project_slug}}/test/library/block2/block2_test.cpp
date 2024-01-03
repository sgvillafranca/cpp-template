#include <catch2/catch_all.hpp>
#include "library/block2/block2.hpp"

TEST_CASE("add_block2") {
  REQUIRE(add_block2(2, 5) == 7);
}
