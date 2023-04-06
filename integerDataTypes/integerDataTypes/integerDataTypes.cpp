// integerDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/**
 * study integer type.
 * 
 * \return 
 */

int main()
{
    int TotalSecondsPlayed{ 100 };
    const int SecondsPerMinute{ 60 };

    // Calculate minuts and seconds played.
    int MinutsPlayed = TotalSecondsPlayed / SecondsPerMinute;
    int SecondsPlayed = TotalSecondsPlayed % SecondsPerMinute;

    // Print results.
    std::cout << "Minuts Played: " << MinutsPlayed << " Minuts and "<<SecondsPlayed<<" Seconds.\n";
}

