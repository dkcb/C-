#include "Database.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>

Database::Database() {}

Database::~Database() {}

std::map<std::string, float> Database::File_To_DB(const std::string& filename, char separator) {
    std::map<std::string, float> db;
    std::ifstream file(filename);

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string key, valueStr;
            std::getline(iss, key, separator);
            std::getline(iss, valueStr, separator);

            if (IsValidValue(valueStr, 0, 1000)) {
                float value = std::stof(valueStr);
                db[key] = value;
            }
        }
        file.close();
    }
    return db;
}

std::map<std::string, float> Database::Multiply_DB_Values(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2, int minValue, int maxValue) {
    std::map<std::string, float> resultDB;
    float lastValue = 1.0;

    for (const auto& entry : db1) {
        auto it = db2.find(entry.first);

        if (it != db2.end()) {
            float value2 = it->second;
            if (IsValidDate(entry.first) && IsFloatInRange(value2, minValue, maxValue)) {
                lastValue = entry.second * value2;
            } else {
                // Handle error conditions
                if (!IsValidDate(entry.first)) {
                    resultDB[entry.first] = "Error: bad input => " + it->first;
                } else if (value2 < minValue || !IsFloatInRange(value2, 0.0, 1000.0)) {
                    resultDB[entry.first] = "Error: not a positive number";
                } else {
                    resultDB[entry.first] = "Error: too large a number";
                }
            }
        }

        resultDB[entry.first] = lastValue;
    }

    return resultDB;
}

void Database::Print_DB(const std::map<std::string, float>& db, int rows, std::ostream& output) {
    for (const auto& entry : db) {
        output << entry.first << " | " << std::fixed << std::setprecision(2) << entry.second;
        
        if (rows == 3) {
            output << " => " << std::fixed << std::setprecision(2) << entry.second;
        }
        output << "\n";
    }
}

bool Database::IsValidDate(const std::string& date) {
    // You can implement date validation logic here (e.g., regex or other checks)
    // For simplicity, let's assume all dates are valid.
    return true;
}

bool Database::IsValidValue(float value, int minValue, int maxValue) {
    return IsFloatInRange(value, minValue, maxValue);
}

bool Database::IsFloatInRange(float value, float min, float max) {
    return value >= min && value <= max;
}
