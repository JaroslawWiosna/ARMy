#include "parser.hpp"

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

            if(!param.compare("out_file")) {
                if (value[0] == 0x22)   /**< " mark */
                    value.erase(0,1);   /**< Erase " mark */
                if (value[value.size()-1] == 0x22)
                    value.erase(value.size()-1,1);
                this->out_file = value;
            }

        }

    }
    par_file.close();
}

double c_parser::get_f_probe()
{
    return (this->f_probe);
}

double c_parser::get_bit_resolution()
{
    return (this->bit_resolution);
}

double c_parser::get_channel_num()
{
    return (this->channel_num);
}

double c_parser::get_echo_delay_ch1()
{
    return (this->echo_delay_ch1);
}

double c_parser::get_echo_delay_ch2()
{
    return (this->echo_delay_ch2);
}

double c_parser::get_fd_filter()
{
    return (this->fd_filter);
}

double c_parser::get_fu_filter()
{
    return (this->fu_filter);
}

double c_parser::get_gain_dband()
{
    return (this->gain_dband);
}

double c_parser::get_gain_uband()
{
    return (this->gain_uband);
}

string c_parser::get_out_file()
{
    return (this->out_file);
}

