#include "Database.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_filename>" << std::endl;
        return 1;
    }

    Database db;
    std::string inputFilename = argv[1];

    // Convert data from the input file to a database
    std::map<std::string, float> DB_prices = db.Convert_To_DB("data.csv", ',');
    std::map<std::string, float> DB_rates = db.Convert_To_DB("input.txt", '|');
    if (DB_prices.empty()) {
        std::cerr << "Failed to read data from the prices file." << std::endl;
        return 1;
    }
    if (DB_rates.empty()) {
        std::cerr << "Failed to read data from the prices file." << std::endl;
        return 1;
    }
    // db.Print_DB(DB_prices, std::cout);
    db.Print_DB(DB_rates, std::cout, 2);

    // Merge the database with itself (as an example)
    std::map<std::string, float> mergedData = db.Merge_DB(DB_prices, DB_rates);

    // Print the merged data
    std::cout << "---------------------\n\n\n\n\n";
    db.Print_DB(mergedData, std::cout, 2);

    return 0;
}
