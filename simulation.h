#ifndef SIMULATION_H_INCLUDED
#define SIMULATION_H_INCLUDED

//returns the empirical probability that there are <matchsize> people with the same birthday, among a population of size <population>
//uses <repetitions> trials
double simulatedprobability( int matchsize, int population, int daysinyear, int repetitions );

#endif // SIMULATION_H_INCLUDED
