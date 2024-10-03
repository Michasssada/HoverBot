#ifndef READ_CFG_H
#define READ_CFG_H

#include <string>

class ReadCfg {
public:
    bool searchInFile(const std::string& filename, const std::string& keyword);
};

#endif // READ_CFG_H
