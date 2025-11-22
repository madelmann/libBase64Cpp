
#include "Base64.h"


#include <base64.hpp>


std::string Base64::decode( const std::string& code, bool removeLineBreaks )
{
    return ::base64_decode( code, removeLineBreaks );
}

std::string Base64::encode( const std::string& code, bool url )
{
    return ::base64_encode( code, url );
}

