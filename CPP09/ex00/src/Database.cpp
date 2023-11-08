#include "Database.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

std::map<std::string, float> Database::Convert_To_DB(const std::string& filename, char separator) {
    std::map<std::string, float> db;
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string key, valueStr;
            std::getline(iss, key, separator); // Use the provided separator
            std::getline(iss, valueStr, separator);

            if (IsValidValue(valueStr)) {
                db[key] = std::stof(valueStr);
            }else{
                std::cout << key << " WRONG VALUE! " << valueStr << "\n";
            }
        }
        file.close();
    }
    return db;
}

void Database::Print_DB(const std::map<std::string, float>& db, std::ostream& output, int elementsToPrint) {
    for (const auto& entry : db) {
        output << entry.first;
        if (elementsToPrint > 1) {
            output << " | " << std::fixed << std::setprecision(2) << entry.second;
        }
        if (elementsToPrint > 2) {
            output << " => " << std::fixed << std::setprecision(2) << entry.second;
        }
        output << "\n";
    }
}

void Database::Print_Result(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2) {
    std::map<std::string, float> result;
    float lastValue2 = 1.0; // Initialize to a default value

    for (const auto& entry1 : db1) {
        if (!isValidDate(entry1.first))
        {
            std::cout << entry1.first << "wrong date format!\n";
        }
        auto it = db2.find(entry1.first + " ");
        if (it != db2.end()) {
            if (it->second < 0.0 || it->second > 1000.0){
                std::cout << entry1.first << "  Rate is " << it->second << ", but it must be positive float between 0 and 1000!\n";
            }else
            {
                lastValue2 = it->second;
                std::cout << entry1.first << " | " << entry1.second << " => " << "lv:" << lastValue2 << std::fixed << std::setprecision(2) << " res: "<< entry1.second * lastValue2 << std::endl;
            }
        } else {
            // float resultValue = entry1.second * lastValue2;
            std::cout << entry1.first << " | " << entry1.second << " => " << "lv:" << lastValue2 << std::fixed << std::setprecision(2) << " res: "<< entry1.second * lastValue2 << std::endl;
            // std::cout << entry1.first << " LV = " << lastValue2 << std::endl;
            // result[entry1.first] = resultValue;
        }
    }

}

bool Database::isValidDate(const std::string& dateStr) {
    // Define a regular expression pattern for the YYYY-MM-DD format.
    std::regex pattern("^\\d{4}-(0[1-9]|1[0-2])-(0[1-9]|[12]\\d|3[01])$");

    // Use std::regex_match to check if the dateStr matches the pattern.
    if (std::regex_match(dateStr, pattern)) {
        // Extract year, month, and day from the input string.
        int year = std::stoi(dateStr.substr(0, 4));
        int month = std::stoi(dateStr.substr(5, 2));
        int day = std::stoi(dateStr.substr(8, 2));

        // Validate the number of days in each month.
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            return false;
        } else if (month == 2) {
            // Leap year check: February can have 29 days.
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                if (day > 29) {
                    return false;
                }
            } else {
                if (day > 28) {
                    return false;
                }
            }
        }

        return true;
    }

    return "Wrong date format";
}

bool Database::IsValidValue(const std::string& value) {
    try {
        float floatValue = std::stof(value);
        return (1);
    }
    catch (const std::exception& e) {
        return false;
    }
}
