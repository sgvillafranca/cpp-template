#include <catch2/catch_all.hpp>
#include "utils/utils.hpp"

TEST_CASE("add_utils") {
  REQUIRE(add_utils(2, 0) == 2);
}
