#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Edge
{
    Edge( string n1, string n2, float d )
    {
        node1 = n1;
        node2 = n2;
        dist = d;
    }
    
    string node1;
    string node2;
    float dist;
};

void SetupEdges( vector<Edge>& edges );
vector<int> GetPath( vector<Edge>& edges, vector<string> cities, int startIndex );

int main()
{
    srand( time( NULL ) );
    
    vector<Edge> edges;
    vector<string> cities = { "Independence", "Kansas City", "Lee's Summit", "Olathe", "Overland Park", "Raytown" };
    SetupEdges( edges );

    while ( true )
    {
        cout << "Cities: " << endl;
        for ( unsigned int i = 0; i < cities.size(); i++ )
        {
            cout << i << ". " << cities[i] << endl;
        }

        cout << endl << "Start at which city index? ";
        int startIndex;
        cin >> startIndex;

        vector<Edge> path = GetPath( edges, cities, startIndex );

        cout << endl << "Generated path:" << endl;

        cout << endl << "Total distance:" << endl;

        cout << endl << "Press a key to generate again..." << endl;
        cin.ignore();
        cin.get();
    }
    
    return 0;
}

vector<int> GetPath( vector<Edge>& edges, vector<string> cities, int startIndex )
{
    string startingCity = cities[startIndex];
    vector<int> path;
    path.push_back( startIndex );
    

    while ( cities.size() > 0 )
    {
    }
    
    return path;
}


void SetupEdges( vector<Edge>& edges )
{
    edges.push_back( Edge( "Independence", "Kansas City", 9 ) );
    edges.push_back( Edge( "Independence", "Lee's Summit", 13 ) );
    edges.push_back( Edge( "Independence", "Olathe", 26 ) );
    edges.push_back( Edge( "Independence", "Overland Park", 16 ) );
    edges.push_back( Edge( "Independence", "Raytown", 6 ) );
    
    edges.push_back( Edge( "Kansas City", "Lee's Summit", 17 ) );
    edges.push_back( Edge( "Kansas City", "Olathe", 20 ) );
    edges.push_back( Edge( "Kansas City", "Overland Park", 10 ) );
    edges.push_back( Edge( "Kansas City", "Raytown", 9 ) );
    
    edges.push_back( Edge( "Lee's Summit", "Olathe", 24 ) );
    edges.push_back( Edge( "Lee's Summit", "Overland Park", 16 ) );
    edges.push_back( Edge( "Lee's Summit", "Raytown", 8 ) );
    
    edges.push_back( Edge( "Olathe", "Overland Park", 11 ) );
    edges.push_back( Edge( "Olathe", "Raytown", 21 ) );
    
    edges.push_back( Edge( "Overland Park", "Raytown", 11 ) );
}
