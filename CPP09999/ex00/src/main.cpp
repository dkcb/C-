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
    std::map<std::string, float> DB_prices = db.("data.csv", ',', 2);
    std::map<std::string, float> DB_rates = db.File_To_DB("input.txt", '|', 2);
    if (DB_prices.empty()) {
        std::cerr << "Failed to read data from the prices file." << std::endl;
        return 1;
    }
    if (DB_rates.empty()) {
        std::cerr << "Failed to read data from the prices file." << std::endl;
        return 1;
    }
    // db.Print_DB(DB_prices, std::cout);
    db.Print_DB(DB_rates, '|', 2);

    // Merge the database with itself (as an example)
    std::map<std::string, float> mergedData = db.Multiply_DB_Values(DB_prices, DB_rates, 0, 1000);

    // Print the merged data
    std::cout << "---------------------\n\n\n\n\n";
    db.Print_DB(mergedData, '|', 2);

    return 0;
}
