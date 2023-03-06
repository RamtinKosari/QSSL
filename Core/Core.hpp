# ifndef __QSSL_CORE
    //-- Check License
    # ifndef __QSS_LICENSE
        # include "License.hpp"
        # if (__QSSL_LICENSE_AGREEMENT == false)
            # error First You Must Read License in Path "Core/License.hpp" and Make This Macro True
            # define COMPILE_TIME null
            # define COMPILE_DATE null
        # else 
            # define COMPILE_TIME __TIME__
            # define COMPILE_DATE __DATE__
        # endif // __QSSL_LICENSE_AGREEMENT
    # endif // __QSSL_LICENSE
    /**
     * @attention Read Before Downloading, Copying, Installing or Using.
     * @attention by Downloading, Copying, Installing or Using this Library, You Agree to this License !
     * @brief Open Source Astronomy and Astrophysics Library's Core Macro
     * @copyright Copyright (c) 2023-2037, QSS Company - Section IRC (International Research Center)
     * @file Core.hpp
     * @author Qatora Bataka
     * @details This Library Can be Used in Games that Astronomical Calculations are Needed or for Creating Your Own Universe
     * @version 1.0
     * @date 2023-03-06
     */
    # define __QSSL_CORE
    //-- Check C++
    # ifndef __cplusplus
        # error Core.hpp Must be Compiled as C++
    # endif // __cplusplus
    //-- Check Compiler
    # if defined(__GNUC__) || defined(__clang__)
        //-- Your CPP Compiler Can Compiler this Library
        # define DEFAULT_COMPILER 1
    # else
        //-- This Library has Syntax Methodes that are Only Compilable by GCC and CLang Compilers
        # define DEFAULT_COMPILER 0
    # endif // Check Compiler
    //-- Include Configs Header File
    # ifndef __QSSL_CONFIGS
        # include "Configs.hpp"
    # endif // __QSSL_CONFIGS
    //-- Include Formats Header File
    # ifndef __QSSL_FORMATS
        # include "Formats.hpp"
    # endif // __QSSL_FORMATS
    //-- Include Graphical View Methodes
    # ifndef __QSSL_GRAPHICAL_VIEW
        # include "GraphicalView/GraphicalView.hpp"
        # if (GRAPHICAL_VIEW == true)
            #define wow
        # endif
    # endif //__QSSL_GRAPHICAL_VIEW
    //-- Namespace Definition of QSSL Usage
    namespace qssl {

    } // Namespace qssl
# endif // __QSSL_CORE