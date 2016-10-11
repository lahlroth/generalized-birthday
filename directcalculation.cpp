

//using analytical formula for case matchsize=2
double calculatedprobabilitycase2( int population, int daysinyear )
{
    //probability for no match = 1*(1-1/days)*(1-2/days)...(1-(pop-1)/days )
    double nomatchprobability = 1.0;
    for( int i=1; i < population; i++ )
    {
        nomatchprobability *= 1- (i * 1.0)/daysinyear;
    }
    return 1 - nomatchprobability;
}


double calculatedprobability( int matchsize, int population, int daysinyear )
{
    if( matchsize == 2 )
    {
        return calculatedprobabilitycase2( population, daysinyear );
    }
    return -1.0;
}
