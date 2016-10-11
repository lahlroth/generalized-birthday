#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <iostream>
using namespace std;

//initializes vector of birthdays
vector<int> createbirthdayvector( int population, int daysinyear )
{
    vector<int> birthdays;
    for( int i = 0; i< population; i++ )
    {
        int nextbday = rand() % daysinyear;
        birthdays.push_back( nextbday );
    }
    std::sort( birthdays.begin(), birthdays.end() );

    //display the birthdays
    /*for( int i = 0; i< population; i++ )
    {
        cout << birthdays[i] << endl;
    }
    */

    return birthdays;
}

//makes one birthday sample of population and returns 1 if there is a birthday match
int hasmatch( int matchsize, int population, int daysinyear )
{
    //sample birthdays
    vector<int> birthdays = createbirthdayvector( population, daysinyear );

    //check if there are enough of matching birthdays
    int currentsuccesses = 0;
    int matchfound = 0;
    for( int i = 1; (i < population ) ; i++ ) //&& ( matchfound = 0 )
    {
        //cout << "current successes at i=" << i << " are " << currentsuccesses << " and matchfound value is " << matchfound << endl;
        //cout << "for next comparison, values are " <<  birthdays[i] << " and " << birthdays[i-1] << endl;
        if( birthdays[i] == birthdays[i-1] )
        {
            currentsuccesses++;
            if( currentsuccesses+1 >= matchsize )
            {
                matchfound = 1;
            }
        }
        else
        {
            currentsuccesses = 0;
        }
    }

    return matchfound;
}





//returns the empirical probability that there are <matchsize> people with the same birthday, among a population of size <population>
//uses <repetitions> trials
double simulatedprobability( int matchsize, int population, int daysinyear, int repetitions )
{
    int successes = 0;
    for( int i = 0; i< repetitions; i++ )
    {
        successes += hasmatch( matchsize, population, daysinyear );
    }
    cout << "successes from trials: " << successes << " " << repetitions << endl;
    return (1.0 * successes )/repetitions;
}
