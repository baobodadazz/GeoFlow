#ifndef GLOBAL_H
#define GLOBAL_H
#include <string>

class Global
{


public:
    static std::string GLOBAL_DIR;
    Global();

    static void setGD(std::string s)
    {
        GLOBAL_DIR = s;
    }

    static std::string getGD()
    {
        return GLOBAL_DIR;
    }
};

#endif // GLOBAL_H
