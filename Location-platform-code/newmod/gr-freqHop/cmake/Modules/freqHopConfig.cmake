INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_FREQHOP freqHop)

FIND_PATH(
    FREQHOP_INCLUDE_DIRS
    NAMES freqHop/api.h
    HINTS $ENV{FREQHOP_DIR}/include
        ${PC_FREQHOP_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    FREQHOP_LIBRARIES
    NAMES gnuradio-freqHop
    HINTS $ENV{FREQHOP_DIR}/lib
        ${PC_FREQHOP_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(FREQHOP DEFAULT_MSG FREQHOP_LIBRARIES FREQHOP_INCLUDE_DIRS)
MARK_AS_ADVANCED(FREQHOP_LIBRARIES FREQHOP_INCLUDE_DIRS)

