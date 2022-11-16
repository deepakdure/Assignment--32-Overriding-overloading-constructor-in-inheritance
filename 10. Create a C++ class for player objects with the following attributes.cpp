#include <iostream>
#include <string>
using namespace std;
class Player
{
    int player_No;
    string name;
    int No_of_Matches;
    int *No_of_Goals_in_each_matches;

public:
    Player()
    {
        cout << "Enter Player Number :- ";
        cin >> player_No;
        cout << "\nEnter Player name :- ";
        cin >> name;
        cout << "\nEnter No of Matches :- ";
        cin >> No_of_Matches;
        No_of_Goals_in_each_matches = new int[No_of_Matches];
        for (int i = 0; i < No_of_Matches; i++)
        {
            cout << "\nEnter No of Goals in Match " << i + 1 << " :- ";
            cin >> No_of_Goals_in_each_matches[i];
        }
    }
    void display()
    {
        cout << endl
             << "Player Number :- " << player_No << endl;
        cout << "Player Name   :- " << name << endl;
        cout << "No of Matches :- " << No_of_Matches << endl;
        for (int i = 0; i < No_of_Matches; i++)
        {
            cout << "Enter No of Goals in Match " << i + 1 << " :- " << No_of_Goals_in_each_matches[i] << endl;
        }
    }
};
int main()
{
    Player p;
    p.display();
    cout << endl;
    return 0;
}