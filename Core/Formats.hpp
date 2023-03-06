# ifndef __QSSL_FORMATS
    /**
     * @attention Read Before Downloading, Copying, Installing or Using.
     * @attention by Downloading, Copying, Installing or Using this Library, You Agree to this License !
     * @brief Open Source Astronomy and Astrophysics Library's Formats Macro
     * @copyright Copyright (c) 2023-2037, QSS Company - Section IRC (International Research Center)
     * @file Core.hpp
     * @author Qatora Bataka
     * @details This Library Can be Used in Games that Astronomical Calculations are Needed or for Creating Your Own Universe
     * @version 1.0
     * @date 2023-03-06
     */
    # define __QSSL_FORMATS
    //-- Include I/O Header
    # include <iostream>
    //-- Use Formats in qssl Namespace
    namespace qssl {
        # if defined(__GNUC__) || defined(__clang__)
            //-- Time Formats
            enum TimeFormats : std::uint8_t {
                Picosecond = 0, // Avalible in Quantom Computers
                Nanosecond = 1,
                Microsecond = 2,
                Milisecond = 3,
                Second = 4,
                Kilosecond = 5,
                Megasecond = 6,
                Gigasecond = 7,
                Terasecond = 8,
                Petasecond = 9,
                Exasecond = 10, // Billions of Years !
                Zettasecond = 11
            };
            //-- Date Formats
            enum DateFormats : std::int8_t {

            };
            //-- Calendar Formats
            enum CalendarFormats : std::int8_t {

            };
        # else
            //-- Time Formats
            enum TimeFormats {
                Picosecond, // Avalible in Quantom Computers
                Nanosecond,
                Microsecond,
                Milisecond,
                Second,
                Kilosecond,
                Megasecond,
                Gigasecond,
                Terasecond,
                Petasecond,
                Exasecond, // Billions of Years !
                Zettasecond
            };
            //-- Date Formats
            enum DateFormats {

            };
            //-- Calendar Formats
            enum CalendarFormats {

            };
        # endif // Compiler
    } // Namespace qssl
# endif // __QSSL_FORMATS