#ifndef COMPUTERMONITORINGSTATISTICSPARSER_CMD_OPTIONS_DATA_H
#define COMPUTERMONITORINGSTATISTICSPARSER_CMD_OPTIONS_DATA_H

#include <iostream>
#include <boost/program_options.hpp>

struct cmd_options_basic_data {
    explicit cmd_options_basic_data(const std::string &options_description) :
            visible_options(options_description) {}

    cmd_options_basic_data(const cmd_options_basic_data&) = default;

    bool help = false;                      // Show help message
    bool analyze_verbose = false;                   // Display login/logout details
    bool anomaly_detection = false;         // Show anomalies details if found
    bool analyze_activity = true;           // Analyze login/logout total/summarize times
    std::string week_start_day;
    std::string log_file_path;
    std::string normal_login_word;
    boost::program_options::options_description visible_options;
    boost::program_options::variables_map variables_map;
};

#endif //COMPUTERMONITORINGSTATISTICSPARSER_CMD_OPTIONS_DATA_H