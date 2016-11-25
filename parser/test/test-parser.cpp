#include <gtest/gtest.h>
#include "../parser.hpp"

TEST(Parser, parser1)
{
    c_parser o_parser("parser1.txt");
    //o_parser.print_all();
    o_parser.get_values();
    o_parser.print_all();
 
  ASSERT_TRUE(true);
}

int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
