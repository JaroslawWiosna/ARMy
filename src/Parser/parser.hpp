#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <limits>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class c_parser{
private:
    string configuration_file;     /**< Path to configuration file */

    string in_file;     /**< Path to input file */
    double f_probe;     /**< Probe frequency */
    int bit_resolution; /**< Bit resolution */
    int channel_num;    /**< Number of channels */
    double echo_delay_ch1;  /**< Echo for channel number one */
    double echo_delay_ch2;  /**< Echo for channel number two */
    double fd_filter;   /**< Cutoff frequency of filter */
    double fu_filter;   /**< Upper frequency of filter */
    double gain_dband;  /**< Gain of cutoff band */
    double gain_uband;  /**< Gain of upper band */
    string out_file;    /**< P{ath to output file */
    
public:
    
    //constructors
    c_parser(string pathToCfgFile);
    
    //destructor
    ~c_parser();
    
    //methods
    void print_all() const;
    void get_values();
    double get_f_probe();
    double get_bit_resolution();
    double get_channel_num();
    double get_echo_delay_ch1();
    double get_echo_delay_ch2();
    double get_fd_filter();
    double get_fu_filter();
    double get_gain_dband();
    double get_gain_uband();
    string get_out_file();
//    int check_size_of_value(string & val, void *param, unsigned int type = 0, string exclude = "");    /**< type -> 0 <- int value */
                                                                        /**< type -> 1 <- double value */
                                                                        /**< type -> 2 <- string value */
};

/*
int c_parser::check_size_of_value(string & val, void *param, unsigned int type, string exclude)
{    
    if (val.size() == 0)
    {
        cout << "No valid data to parse" << endl;
        return 0;
    }
    if (type == 0 && val.find(exclude) != std::numeric_limits<std::size_t>::max())
    {
        cout << "Incorrect data - double type, should be int" << endl;
        return 0;
    }
    
    if (type == 0)
    {
        int eval = 0;
        int band = val.size();
        int *par = (int *)param;
        for(int i = 0; i < band; ++i)
        {
            eval += (val[i]-0x30)*pow(10,band-(i+1));
        }
        *par = eval;
    }
    else if (type == 1)
    {
        double eval = 0.0;
        double *par = (double *)param;
        int band = val.size();
        if (val.find(exclude) != std::numeric_limits<std::size_t>::max())
        {
            band = val.find(exclude);
            for(int i = val.size()-1; i > band; --i)
            {
                eval += (val[i]-0x30)*pow(10,band-i);
            }
        }
        for(int i = 0; i < band; ++i)
        {
            eval += (val[i]-0x30)*pow(10,band-(i+1));
        }
        *par = eval;
    }
    else
    {
        string *par = (string *)param;
        // *par = eval;
    }
     
    //cout << eval << endl;
    return 1;
}
*/
#endif // PARSER_HPP_


