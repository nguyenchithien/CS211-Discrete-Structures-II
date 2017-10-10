#include <iostream>
#include <cstdlib> // random
#include <ctime>
#include <string>
using namespace std;

int RunTrial( int min, int max, int stopAtFirst, int trialCount )
{
    int diff = (max + 1 - min);
    int n = rand() % diff + min;

    cout << n << " ";

    // Base case
    if ( n == stopAtFirst )
    {
        return trialCount;
    }

    return RunTrial( min, max, stopAtFirst, trialCount + 1 );
}

int main()
{
    srand( time( NULL ) );
    int min, max, stopAtFirst, count;
    
    while ( true )
    {
        cout << "Minimum value: ";
        cin >> min;

        cout << "Maximum value: ";
        cin >> max;

        cout << "Stop at what: ";
        cin >> stopAtFirst;
        while ( stopAtFirst < min || stopAtFirst > max )
        {
            cout << "INVALID: Out of range." << endl;
            cout << "Stop at what: ";
            cin >> stopAtFirst;
        }

        cout << "How many times to run: ";
        cin >> count;
        while ( count <= 0 )
        {
            cout << "COUNT must be 1 or more!" << endl;
            cin >> count;
        }

        int totalTrials = 0;

        for ( int i = 0; i < count; i++ )
        {
            cout << endl << "Running trial set " << i << "... \t";
            int trials = RunTrial( min, max, stopAtFirst, 1 );
            totalTrials += trials;
            cout << "\t" << trials << " trials ran";
        }

        float averageTrials = float( totalTrials ) / float( count );
        cout << "Average trials ran: " << averageTrials << endl << endl;
    }
    
    
    return 0;
}
