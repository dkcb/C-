#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <map>
#include <string>
#include <fstream>

class Database {
public:
    std::map<std::string, float> Convert_To_DB(const std::string& filename, const char separator);
    std::map<std::string, float> Merge_DB(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2);
    void Print_DB(const std::map<std::string, float>& db, std::ostream& output, int elementsToPrint);
    bool IsValidDate(const std::string& date);
    bool IsValidValue(const std::string& value);
};

#endif // DATABASE_HPP
