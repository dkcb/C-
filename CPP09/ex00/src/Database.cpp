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

            if (key == "date " && valueStr == " value")
            {
                std::cout << "      "<<key<<" |"<<valueStr<<"\n";
            } else if(IsValidValue(valueStr)) {
                // separator == ',' ? db.insert(db.begin(), std::make_pair(key, std::stof(valueStr))) : db[key] = std::stof(valueStr);
                if (separator == ','){
                    db.insert(db.begin(), std::make_pair(key, std::stof(valueStr)));
                }else {
                    db[key.substr(0, 10)] = std::stof(valueStr);
                    // std::cout << key.substr(0, 11) << "\n";
                }
            }
        }
        file.close();
    }
    return db;
}

void Database::Print_DB(const std::map<std::string, float>& db, std::ostream& output, int elementsToPrint) {
    for (const auto& entry : db) {
        output << entry.first << " | " << std::fixed << std::setprecision(2) << entry.second << "\n";
    }
}

void Database::Print_Result(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2) {
    std::map<std::string, float> result;
    float lastValue2 = 1.0; // Initialize to a default value

    for (const auto& entry1 : db1) {
        auto it = db2.find(entry1.first);
        if (entry1.second < 0.0 || entry1.second > 1000.0){
            std::cout << entry1.first << "  Rate is " << entry1.second << ", but it must be positive float between 0 and 1000!\n"; //check numeric range
        }else if (!IsValidDate(entry1.first)) //check if date correct
        {
            std::cout << entry1.first << " wrong date format!\n";
        }else if (it != db2.end()) {
        {
            std::cout << entry1.first << " | " << entry1.second << " => " << "lv:" << lastValue2 << std::fixed << std::setprecision(2) << " res: "<< entry1.second * lastValue2 << std::endl;
        }
        } else {
            std::cout << entry1.first << " Not found!\n";
            //find previous date
            for (const auto& entry3 : db1) {
                auto it = db2.find(entry3.first + " ");
                }
            std::cout << entry1.first << " | " << entry1.second << " => " << "lv:" << lastValue2 << std::fixed << std::setprecision(2) << " res: "<< entry1.second * lastValue2 << std::endl;
        }
    }

}

bool Database::IsValidDate(const std::string& dateStr) {
        if (dateStr.substr(4,1) != "-" || dateStr.substr(7,1) != "-" || dateStr.length() != 10) //pattern
        {
            return false;
        }
        // std::cout << dateStr.substr(4,1) << "\n";
        int year = std::stoi(dateStr.substr(0, 4));
        int month = std::stoi(dateStr.substr(5, 2));
        int day = std::stoi(dateStr.substr(8, 2));
        if (year < 0 || month < 0 || day < 0 || year > 3000)
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
        float floatValue = std::stof(value);
        return (1);
    }
    catch (const std::exception& e) {
        return false;
    }
}
