#include "gtest/gtest.h"
#include "project/macro_defines.h"
#include "project/simple_time.h"

namespace el_wheel {
namespace project {
namespace test {

// more of examples but not tests

TEST(debug_prints_test, debug_prints_test) {
  PRINT_INFO("This is a \"info\" message.");
  PRINT_INFO_FMT("This is a \"info\" message with args: %d", 0);

  PRINT_DEBUG("This is a \"debug\" message.");
  PRINT_DEBUG_FMT("This is a \"debug\" message with args: %d", 0);

  // warning & error are all the same
}

TEST(clock_test, clock_test) {
  SimpleTime t = SimpleTime::from_sec(0.21);
  start_clock();
  t.sleep();
  end_clock(__FILE__, __FUNCTION__, __LINE__);
}
}  // namespace test
}  // namespace project
}  // namespace el_wheel