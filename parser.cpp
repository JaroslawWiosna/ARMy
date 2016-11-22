#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class c_parser{
private:
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
    c_parser();
    
    //destructor
    ~c_parser();
    
    //methods
    void print_all() const;
    void get_bit_resolution();
};

int main()
{
    std::ifstream par_file;     /**<Handle to data to parse */
    par_file.open("parser.txt", std::ios::binary);
    
    char mark = par_file.get();
    cout << endl;
    while (par_file.good())
    {
        cout <<mark;
        mark = par_file.get();
    }
    cout << endl << endl;
    par_file.close();
    
    c_parser o_parser;
    o_parser.print_all();
    o_parser.get_bit_resolution();

    return 0;
}

c_parser::c_parser()
{
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

void c_parser::get_bit_resolution()
{
    std::ifstream par_file;     /**<Handle to data to parse */
    par_file.open("parser.txt", std::ios::binary);
    
    string sth;
    char mark = par_file.get();
    cout << endl;
    while (mark != 0x20)
    {
        sth += mark;
        mark = par_file.get();
    }
    cout << endl << endl;
    par_file.close();
    if(!sth.compare("in_files"))
    cout << endl << endl << sth << endl << endl;
}