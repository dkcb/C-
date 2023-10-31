#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <map>
#include <string>
#include <fstream>

class Database {
public:
    static std::map<std::string, float> Convert_To_DB(const std::string& filename, const char separator);
    static std::map<std::string, float> Merge_DB(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2);
    static void Print_DB(const std::map<std::string, float>& db, std::ostream& output, int elementsToPrint);
    static void Print_Result(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2);
    static bool IsValidDate(const std::string& date);
    static bool IsValidValue(const std::string& value);
};

#endif // DATABASE_HPP
