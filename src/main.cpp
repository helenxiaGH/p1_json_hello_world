#include <iostream>
#include <fstream>
#include <iomanip>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

int main() {
    std::cout << "Hi, This is a project about json.\n";

    // Build a json
    json json1;
    json1["number"] = 3.141;
    json1["bool"] = true;
    json1["string"] = "abc";
    json1["dict"] = { {"aa", "kk"}, {"bb", 33} };

    // Print a json
    std::cout << "\n** Print a json as json:\n";
    std::cout << json1 << std::endl;

    // Print a json as string
    std::cout << "\n** Print a json as pretty string:\n";
    std::cout << json1.dump(4) << std::endl;

    // Write a json
    std::cout << "\n** Print a json value one by one, after save and load:\n";
    std::ofstream ofs1("a.json");
    ofs1 << std::setw(4) << json1 << std::endl;

    // Read a json
    std::ifstream ifs1("a.json");
    json json2;
    ifs1 >> json2;

    // Iterate the json
    for (json::iterator it = json2.begin(); it != json2.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    // Use it in a STL way
    std::cout << "\n** Print a json's info:\n";
    json json3;
    json3.push_back("foo");
    json3.emplace_back(1.78);
    std::cout << "json " << json3 << std::endl;
    std::cout << "json size: " << json3.size() << std::endl;
    std::cout << "json empty: " << json3.empty() << std::endl;

    return 0;
}
