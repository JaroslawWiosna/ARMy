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
//    int check_size_of_value(string & val, void *param, unsigned int type = 0, string exclude = "");    /**< type -> 0 <- int value */
                                                                        /**< type -> 1 <- double value */
                                                                        /**< type -> 2 <- string value */
};
c_parser::c_parser(string pathToCfgFile)
{
    configuration_file = pathToCfgFile;

    in_file = "sciezka";
    f_probe = 10.1;
    bit_resolution = 8;
    channel_num = 2;
    echo_delay_ch1 = 0.0;
    echo_delay_ch2 = 1.1;
    fd_filter = 12.1;
    fu_filter = 12.4;
    gain_dband = 2.5;
    gain_uband = 2.8;
}

c_parser::~c_parser()
{
    
}

void c_parser::print_all() const
{
    cout << endl;
    cout << "in_file: " << in_file << endl;
    cout << "f_probe: " << f_probe << endl;
    cout << "bit_resolution: " << bit_resolution << endl;
    cout << "channel_num: " << channel_num << endl;
    cout << "echo_delay_ch1: " << echo_delay_ch1 << endl;
    cout << "echo_delay_ch2: " << echo_delay_ch2 << endl;
    cout << "fd_filter: " << fd_filter << endl;
    cout << "fu_filter: " << fu_filter << endl;
    cout << "gain_dband: " << gain_dband << endl;
    cout << "gain_uband: " << gain_uband << endl;
}

void c_parser::get_values()
{
    int ovar = 1;
    std::ifstream par_file;     /**<Handle to data to parse */
    par_file.open(configuration_file, std::ios::binary);

    string param, equalSign, value;
    string line;

    while(std::getline(par_file, line)) {
        par_file >> param >> equalSign >> value;

        // check if the second string (named here as 'b') is equal sign
	if (equalSign.compare("=") == 0 ) {
           
	    // print for debug only :)	
            //cout << "param=" << param << endl << "value=" << value << endl << endl;
            
	    if(!param.compare("in_file")) {
                this->in_file = std::stod(value);
	    }

	    if(!param.compare("f_probe")) {
                this->f_probe = std::stod(value);
	    }

	    if(!param.compare("bit_resolution")) {
                this->bit_resolution = std::stod(value);
	    }

	    if(!param.compare("channel_num")) {
                this->channel_num = std::stod(value);
	    }

	    if(!param.compare("echo_delay_ch1")) {
                this->echo_delay_ch1 = std::stod(value);
	    }

	    if(!param.compare("echo_delay_ch2")) {
                this->echo_delay_ch2 = std::stod(value);
	    }

	    if(!param.compare("fd_filter")) {
                this->fd_filter = std::stod(value);
	    }

	    if(!param.compare("fu_filter")) {
                this->fu_filter = std::stod(value);
	    }

	    if(!param.compare("gain_dband")) {
                this->gain_dband = std::stod(value);
	    }

	    if(!param.compare("gain_uband")) {
                this->gain_uband = std::stod(value);
	    }

        }

    }	
    par_file.close();
}

double c_parser::get_f_probe() 
{
    return (this->f_probe);
}


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
        //*par = eval;
    }
     
    //cout << eval << endl;
    return 1;
}
*/
#endif // PARSER_HPP_


