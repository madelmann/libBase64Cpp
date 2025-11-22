INCLUDE(${PROJECT_SOURCE_DIR}/CMake/Base.cmake)

SET(SOURCES
    Base64.cpp
)

SET(HEADERS
    Base64.h
)

SET(DEPENDENCIES
)

SET(MODULES
)

add_include( Externals/2.rc.09 )

build_static_lib( base64cpp "${MODULES}" )
