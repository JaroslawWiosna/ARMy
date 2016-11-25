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

    ASSERT_EQ( o_parser.get_bit_resolution() , 5551);
    ASSERT_EQ( o_parser.get_channel_num() , 2);
    ASSERT_EQ( o_parser.get_echo_delay_ch1() , 0.0);
    ASSERT_EQ( o_parser.get_echo_delay_ch2() , 1.1);
    ASSERT_EQ( o_parser.get_fd_filter() , 12.1);
    ASSERT_EQ( o_parser.get_fu_filter() , 12.4);
    ASSERT_EQ( o_parser.get_gain_dband() , 2.5);
    ASSERT_EQ( o_parser.get_gain_uband() , 2.8);
    ASSERT_EQ( o_parser.get_out_file() , "/data/file/outdata.mp3");

    ASSERT_FALSE( std::abs(o_parser.get_gain_uband() - 10000000) < eps);
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
