#include <iostream>

using namespace std;

int main()
{
    string name[6] = {"Lahore Qalanders", "Karachi Kings",
                      "Islamabad United", "Multan Sultan",
                      "Peshawar Zalmi",   "Quetta Galadiaters"};
    string home[6] = {"Lahore", "Karachi",  "Islamabad",
                      "Multan", "Peshawar", "Quetta"};
    string ground[6] = {"Gaddafi Stadium",    "National Stadium",
                        "Rawalpindi Stadium", "Multan Cricket Stadium",
                        "Arbab Niaz Satdium", "Bugti Stadium"};
    string namep[30] = {
        "player1",  "player2",  "player3",  "player4",  "player5",  "player6",
        "player7",  "player8",  "player9",  "player10", "player11", "player12",
        "player13", "player14", "player15", "player16", "player17", "player18",
        "player19", "player20", "player21", "player22", "player23", "player24",
        "player25", "player26", "player27", "player28", "player29", "player30"};
    int age[30] = {25, 26, 27, 28, 29, 30, 24, 23, 31, 32, 28, 29, 30, 26, 27,
                   25, -3, 34, 32, 31, 24, 26, 28, 30, 27, 29, 25, 32, 31, 26};
    string role[30] = {"Batsman", "Bowler", "All-rounder", "Wicketkeeper", "Bowler",
                "Batsman", "Bowler", "All-rounder", "Batsman",      "Bowler",
                "Batsman", "Bowler", "All-rounder", "Wicketkeeper", "Bowler",
                "Batsman", "Bowler", "All-rounder", "Batsman",      "Bowler",
                "Batsman", "Bowler", "All-rounder", "Wicketkeeper", "Bowler",
                "Batsman", "Bowler", "All-rounder", "Batsman",      "Bowler"};
    for (int i = 0; i < 6; i++)
    {
        cout << name[i] << " ";
    }
    cout << '\n';
    for (int i = 0; i < 6; i++)
    {
        cout << home[i] << " ";
    }
}
