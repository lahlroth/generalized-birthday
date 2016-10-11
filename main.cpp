#include <iostream>
#include "simulation.h"
#include "directcalculation.h"



using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int matchsize, populationsize, daysinyear, simulations;
    matchsize = 2;
    populationsize = 23;
    daysinyear = 365;
    simulations = 100000;

    cout << "Calculated probability " << calculatedprobability( matchsize, populationsize, daysinyear ) << endl;
    cout << "Simulated probability " << simulatedprobability( matchsize, populationsize, daysinyear, simulations ) << endl;

    return 0;
}


