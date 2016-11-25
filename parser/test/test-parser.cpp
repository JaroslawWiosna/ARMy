#include <gtest/gtest.h>
#include "../parser.hpp"

TEST(Parser, parser1)
{
    c_parser o_parser("../test/parser1.txt");
    //o_parser.print_all();
    o_parser.get_values();
    //o_parser.print_all();

    double eps = 0.1;
    // TODO: Check if double values can be asserted. 
    // Tihe safest way is ASSERT_TRUE, but ASSERT_EQ looks better
    ASSERT_EQ( o_parser.get_f_probe() , 154.15); 
    ASSERT_TRUE( std::abs(o_parser.get_f_probe() - 154.15) < eps); 
}

TEST(Parser, parser2)
{
    c_parser o_parser("../test/parser2.txt");
    //o_parser.print_all();
    o_parser.get_values();
    //o_parser.print_all();

    double eps = 0.1;
    // TODO: Check if double values can be asserted. 
    // Tihe safest way is ASSERT_TRUE, but ASSERT_EQ looks better
    ASSERT_EQ( o_parser.get_f_probe() , 154.15); 
    ASSERT_TRUE( std::abs(o_parser.get_f_probe() - 154.15) < eps); 
}



int main(int argc, char* argv[])
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
