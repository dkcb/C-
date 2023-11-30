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
            if (separator == '|' && line.substr(10,3) != " | " && line != "date | value" ) {
                std::cout << "Wrong db format!\n";
                exit (1);
            }
            std::istringstream iss(line);
            std::string key, valueStr;
            std::getline(iss, key, separator); // Use the provided separator
            std::getline(iss, valueStr, separator);

            if (key == "date " && valueStr == " value")
            {
                std::cout << "      "<<key<<"|"<<valueStr<<"\n";
            } else if(IsValidValue(valueStr)) { // separator == ',' ? db.insert(db.begin(), std::make_pair(key, std::stof(valueStr))) : db[key] = std::stof(valueStr);
                if (separator == ','){
                    db.insert(db.end(), std::make_pair(key, std::stof(valueStr)));
                }else if (separator == '|'){
                    db[key.substr(0, 10)] = std::stof(valueStr);
                }
            }
        }
        file.close();
    }
    return db;
}

void Database::Print_DB(const std::map<std::string, float>& db, std::ostream& output) {
    for (const auto& entry : db) {
        output << entry.first << " | " << std::fixed << std::setprecision(2) << entry.second << "\n";
    }
}

void Database::Print_Result(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2) {
    std::map<std::string, float> result;

    for (const auto& weights : db1) { // auto it = db2.find(weights.first); for every weight
        if (weights.second < 0.0 || weights.second > 1000.0){ //check numeric range
            std::cout << weights.first << "   Rate is " << weights.second << ", but it must be positive float between 0 and 1000!\n";
            continue ;
        }
        else if (!IsValidDate(weights.first) || weights.first == "2009-01-01") { //check if date correct
            std::cout << weights.first << "   Wrong date!\n";
            continue ;}      
        for (auto prices = db2.rbegin(); prices != db2.rend(); prices++){
                if (prices->first.compare(weights.first) <= 0) {
                    if (prices->first.compare(weights.first) == 0) {
                        std::cout << weights.first << " | " << weights.second << " => " << std::fixed << std::setprecision(2) << weights.second * prices->second << std::endl;
                    }
                    else {
                        std::cout << weights.first << " | " << weights.second << " => " << std::fixed << std::setprecision(2) << weights.second * prices->second << std::endl;
                    }
                break ;
            }
        }
    }
}

bool Database::IsValidDate(const std::string& dateStr) {
        if (dateStr.substr(4,1) != "-" || dateStr.substr(7,1) != "-" || dateStr.length() != 10)
            return false;
        int year = std::stoi(dateStr.substr(0, 4));
        int month = std::stoi(dateStr.substr(5, 2));
        int day = std::stoi(dateStr.substr(8, 2));
        if (year < 2008 || month < 0 || day < 0 || year > 9999)
            return false;
        if (month == 2) {
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
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        else if ( day > 31)
            return false;
        return true;
}

bool Database::IsValidValue(const std::string& value) {
    try {
        float floatValue;
        floatValue = std::stof(value);
        if (!floatValue)
            return (0);
        return (1);
    }
    catch (const std::exception& e) {
        return false;
    }
}
