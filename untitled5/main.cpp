#include <iostream>
#include <fstream>
#include <string>
#include <vector>


struct movie{
    std::string country = "usa";
    std::string year = "1994";
    std::string studio = "Columbia Pictures";
    std::string director = "Frank Darabont";
    std::vector<std::string> characters;
};

int main() {
    std::ofstream file;
    movie first;
    first.characters.push_back("Morgan Freeman");
    file.open("file.json");
    file << "{ " << "\"country\": \"" << first.country << "\", ";
    file  << "\"year\": \"" << first.year << "\", ";
    file  << "\"studio\": \"" << first.studio << "\", ";
    file  << "\"director\": \"" << first.director << "\", ";
    file  << "\"characters\": \"" << first.characters[0] << "\" }";
    return 0;
}
