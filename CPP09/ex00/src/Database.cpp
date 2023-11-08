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
                float value = std::stof(valueStr);
                db[key] = value;
            }
        }
        file.close();
    }
    return db;
}

std::map<std::string, float> Database::Merge_DB(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2) {
    std::map<std::string, float> mergedDB;

    for (const auto& entry : db1) {
        auto it = db2.find(entry.first);
        if (it != db2.end()) {
            // If the key exists in both databases, multiply the values
            mergedDB[entry.first] = entry.second * it->second;
        }
    }
    Database::Print_DB(mergedDB, std::cout, 2);
    return mergedDB;
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
        auto it = db2.find(entry1.first);
        if (it != db2.end()) {
            lastValue2 = it->second;
            float resultValue = entry1.second * it->second;
            result[entry1.first] = resultValue;
        } else {
            // float resultValue = entry1.second * lastValue2;
            std::cout << entry1.first << " | " << entry1.second << " => " << "lv:" << lastValue2 << std::fixed << std::setprecision(2) << " res: "<< entry1.second * lastValue2 << std::endl;
            // result[entry1.first] = resultValue;
        }
    }

        // for (const auto& entry : db1) {
        //     float value2 = 1.0; // Initialize to a default value
        //     auto it = db2.find(entry.first);
        //     if (it != db2.end()) {
        //         value2 = it->second;
        //     }

        //     float result = entry.second * value2;

        //     std::cout << entry.first << " | " << std::fixed << std::setprecision(2) << result << "\n";
        // }
    // for (const auto& entry1 : db1) {
    //     std::cout << entry1.first;
    //     std::cout << " | " << std::fixed << std::setprecision(2) << entry1.second;
    //     for (const auto& entry2 : db2) {
    //         // auto it = db2.find(entry1.first);
    //         std::cout << entry2.second <<"E";
    //         // if (it != db2.end()) {
    //         // If the key exists in both databases, multiply the values
    //             std::cout << " => " << std::fixed << std::setprecision(2) << entry1.second * entry2.second;
    //         // }
    //         // else
    //         // {
    //         //     std::cout << " => " << std::fixed << std::setprecision(2) << entry1.second * 0;
    //         // }
    //     }
    //     std::cout << "\n";
    // }
    // std::cout << "\n";
}



bool Database::IsValidDate(const std::string& date) {
    // You can implement date validation logic here
    // It should check if the date is in the format: Year-Month-Day
    // and if it's a valid date.
    // Implementing this validation is beyond the scope of this example.
    return true; // Placeholder, assuming dates are valid
}

bool Database::IsValidValue(const std::string& value) {
    try {
        float floatValue = std::stof(value);
        return (floatValue >= 0.0 && floatValue <= 1000.0);
    }
    catch (const std::exception& e) {
        return false;
    }
}
