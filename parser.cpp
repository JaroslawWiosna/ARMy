#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

class c_parser{
private:
    string in_file;
    double f_probe;
    int bit_resolution;
    int channel_num;
    double echo_delay_ch1;
    double echo_delay_ch2;
    double fd_filter;
    double fu_filter;
    double gain_dband;
    double gain_uband;
    string out_file;
    
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

    return 0;
}

c_parser::c_parser()
{
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
    
    char mark = par_file.get();
    cout << endl;
    while (par_file.good())
    {
        cout <<mark;
        mark = par_file.get();
    }
    cout << endl << endl;
    par_file.close();
}