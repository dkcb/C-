#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <map>
#include <string>
#include <fstream>

class Database {
public:
    Database();
    ~Database();
    std::map<std::string, float> File_To_DB(const std::string& filename, char separator);
    std::map<std::string, float> Multiply_DB_Values(const std::map<std::string, float>& db1, const std::map<std::string, float>& db2, int minValue, int maxValue);
    void Print_DB(const std::map<std::string, float>& db, int rows, std::ostream& output);
    
private:
    bool IsValidDate(const std::string& date);
    bool IsValidValue(float value, int minValue, int maxValue);
    bool IsFloatInRange(float value, float min, float max);
};

#endif // DATABASE_HPP
