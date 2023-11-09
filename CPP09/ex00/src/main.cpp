#include "Database.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_filename>" << std::endl;
        return 1;
    }

    std::string inputFilename = argv[1];

    // Convert data from the input file to a database
    std::map<std::string, float> DB_prices = Database::Convert_To_DB("data.csv", ',');
    // std::cout << " prices size is: " << DB_prices.size() << "\n";
    std::map<std::string, float> DB_rates = Database::Convert_To_DB(argv[1], '|');
    if (DB_prices.empty()) {
        std::cerr << "Failed to read data from the prices file." << std::endl;
        return 1;
    }
    if (DB_rates.empty()) {
        std::cerr << "Failed to read data from the prices file." << std::endl;
        return 1;
    }
    // Database::Print_DB(DB_prices, std::cout, 2);
    // std::cout << "---------------------\n\n\n";
    Database::Print_DB(DB_rates, std::cout, 2);

    // Merge the database with itself (as an example)

    std::cout << "---------------------\n\n\n";
    // Print the merged data
    Database::Print_Result(DB_rates, DB_prices);

    return 0;
}
