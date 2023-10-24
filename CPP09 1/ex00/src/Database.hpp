#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <map>
#include <string>
#include <fstream>
#include <ostream>

class Database {
public:
    Database();
    ~Database();
    std::map<std::string, float> Convert_To_DB(const std::string& filename, char separator);
    std::map<std::string, float> Merge_DB(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2);
    void Print_DB(const std::map<std::string, float>& db, std::ostream& output);
    void Print_Merged(const std::map<std::string, std::pair<float, float>>& mergedDB, std::ostream& output);
    
private:
    bool IsValidDate(const std::string& date);
    bool IsValidValue(float value);
};

#endif // DATABASE_HPP
