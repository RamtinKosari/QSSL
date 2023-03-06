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
            enum DateFormats : std::uint8_t {
                MMDDYY = 0, // Month, Day, Year
                DDMMYY = 1, // Day, Month, Year
                YYMMDD = 2, // Year, Month, Day
                MonthDDYY = 3 // Month Name, Day, Year
            };
            //-- Calendar Formats
            enum CalendarFormats : std::uint8_t {
                Julian = 0,
                Hebrew = 1,
                Chinese = 2,
                Gregorian = 3,
                SolarHijiri = 4,
                LunarHijiri = 5
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
                MMDDYY, // Month, Day, Year
                DDMMYY, // Day, Month, Year
                YYMMDD, // Year, Month, Day
                MonthDDYY // Month Name, Day, Year
            };
            //-- Calendar Formats
            enum CalendarFormats {
                Julian,
                Hebrew,
                Chinese,
                Gregorian, 
                SolarHijiri,
                LunarHijiri
            };
        # endif // Compiler
        //-- Default Formats
        volatile int DEFAULT_TIME = Second;
        volatile int DEFAULT_DATE = YYMMDD;
        volatile int DEFAULT_CALENDAR = Gregorian;
    } // Namespace qssl
# endif // __QSSL_FORMATS