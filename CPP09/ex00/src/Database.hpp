#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <map>
#include <string>
#include <fstream>
#include <cctype>

class Database {
public:
    static std::map<std::string, float> Convert_To_DB(const std::string& filename, const char separator);
    static void Print_DB(const std::map<std::string, float>& db, std::ostream& output);
    static void Print_Result(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2);
    static bool IsValidValue(const std::string& value);
    static bool IsValidDate(const std::string& dateStr);
};

#endif // DATABASE_HPP
