
#pragma once

#include <string>


class Base64
{
public:
    static std::string decode( const std::string& code, bool removeLineBreaks ); 
    static std::string encode( const std::string& code, bool url );
};

