#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    srand(time(0));
    int x = rand() % 9 + 1;
    cout << "Press Enter 3 times to reveal your future.\n";
    for (int i = 0; i < 3; i++)
    {
        cin.get();
    }
    cout << "You will get " << grade[x] << " in this 261102.";
    return 0;
}