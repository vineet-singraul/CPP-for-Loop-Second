// ### 1. **Simulate a Traffic Light System**
// Create a program to simulate traffic lights at an intersection. You have four directions (North, East, South, West) where traffic lights change in a specified sequence (e.g., green, yellow, red). Use `for` loops to:
//    - Cycle through each traffic light direction.
//    - Alternate the states of each light for a set number of iterations.
//    - Implement timers for each state to manage traffic flow.

#include <iostream>>
using namespace std;
int main()
{
    string dairec1, dairec2, dairec3, dairec4;
    int cout_time = 5;
    for (int i = 1; i <= cout_time; ++i)
    {
        if (i == 5)
        {
            cout << i << " " << "STOP" << endl;
            cout << "Stop East :" << endl;
            cout << "Stop West :" << endl;
            cout << "Go North :" << endl;
            cout << "Go South :" << endl;
            cout << endl;
            cout << endl;
        }
        else
        {
            cout << i << " " << "STOP" << endl;
            cout << "Stop North :" << endl;
            cout << "Stop South :" << endl;
            cout << "Go East :" << endl;
            cout << "Go West :" << endl;
            cout << endl;
            cout << endl;
        }
    }
}