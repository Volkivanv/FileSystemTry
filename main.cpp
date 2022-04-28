#include <iostream>
#include <string>
#include <filesystem>


namespace fs = std::filesystem;



int main() {

    auto recursiveGetFileNamesByExtension =
            [](fs::path path,
               const std::string extension){
                for(auto& p: fs::recursive_directory_iterator(path)) {

                    if (p.path().extension().compare(extension) == 0){
                        std::cout << p.path() << std::endl;
                    }

                }
            };

    std::string dirPath = "C:\\Users";
    std::string ext = ".txt";

    recursiveGetFileNamesByExtension(dirPath,ext);



    return 0;
}
