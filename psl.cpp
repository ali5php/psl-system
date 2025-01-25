#include <iostream>
using namespace std;
int main()
{
    int choice, max = 0, mindex = 0;
    string name[6] = {"Karachi Kings",     "Lahore Qalandars",
                      "Peshawar Zalmi",    "Islamabad United",
                      "Quetta Gladiators", "Multan Sultans"},  // arrayof teams

        hgro[6] = {"National Stadium",
                   "Gaddafi Stadium",
                   "Arbab Niaz Stadium",
                   "Rawalpindi Cricket Stadium",
                   "Bugti Stadium",
                   "Multan Cricket Stadium"},  // array of home grounds

        hcity[6] = {"Karachi", "Lahore",        "Peshawar", "Islamabad",
                    "Quetta",  "Multan Sultans"},  // array of cities

        pname[30] = {"Babar Azam",
                     "Mohammad Rizwan",
                     "Shaheen Shah Afridi",
                     "Shadab Khan",
                     "Fakhar Zaman",
                     "Haris Rauf",
                     "Imam-ul-Haq",
                     "Naseem Shah",
                     "Hasan Ali",
                     "Iftikhar Ahmed",
                     "Mohammad Nawaz",
                     "Usama Mir",
                     "Abrar Ahmed",
                     "Saim Ayub",
                     "Agha Salman",
                     "Mohammad Wasim Jr.",
                     "Shan Masood",
                     "Sarfaraz Ahmed",
                     "Mohammad Haris",
                     "Khushdil Shah",
                     "Mohammad Hasnain",
                     "Zaman Khan",
                     "Tayyab Tahir",
                     "Ihsanullah",
                     "Kamran Ghulam",
                     "Mohammad Ali",
                     "Mir Hamza",
                     "Faheem Ashraf",
                     "Saud Shakeel",
                     "Abdullah Shafique"},  // array of 30 players for bidding

        prole[30] = {"Batsman", "Wicketkeeper", "Bowler",       "All-rounder",
                     "Batsman", "Bowler",       "Batsman",      "Bowler",
                     "Bowler",  "All-rounder",  "All-rounder",  "Bowler",
                     "Bowler",  "Batsman",      "Batsman",      "All-rounder",
                     "Batsman", "Wicketkeeper", "Wicketkeeper", "Batsman",
                     "Bowler",  "Bowler",       "Batsman",      "Bowler",
                     "Batsman", "Bowler",       "Bowler",       "Bowler",
                     "Batsman", "Batsman"}  // roles of all those batsmen

    ,
           plq[30] = {" "}, pkk[30] = {" "}, ppz[30] = {" "}, piu[30] = {" "},
           pqg[30] = {" "},  // empty array of teams that will be filled with
                             // playerspms
        pms[30] = {" "},
           // teams for match
        teamA[6] = {"Karachi Kings",    "Lahore Qalandars",  "Peshawar Zalmi",
                    "Islamabad United", "Quetta Gladiators", "Multan Sultans"},
           teamB[6] = {"Karachi Kings",     "Lahore Qalandars",
                       "Peshawar Zalmi",    "Islamabad United",
                       "Quetta Gladiators", "Multan Sultans"},
           man_of_match[15] = {" "};

    int price[6] = {-1}, score1[15] = {0}, score2[15] = {0},
        man_of_match_score[15] = {0}, points[6] = {0}, mplayed[6] = {0},
        won[6] = {0}, loss[6] = {0}, draw[6] = {0};
    bool flag = true, inflag = true;
    srand(time(0));
    while (flag)
    {
        cout << " Welcome to the PSL Management System:" << endl;
        cout << " 1. View Teams and Home Grounds:" << endl;
        cout << " 2. Draft Players for Teams" << endl;
        cout << " 3. View Match Schedule " << endl;
        cout << " 4. Enter Match Results " << endl;
        cout << " 5. Display Points Table" << endl;
        cout << " 6. Search for Teams or Players" << endl;
        cout << " 7. Exit " << endl;
        cout << "Enter your choice:";
        cin >> choice;
        if (choice == 1)
        {
            for (int i = 0; i < 6; i++)
            {
                cout << "Team Name:- " << name[i] << " City:- " << hcity[i]
                     << " Ground:- " << hgro[i] << "\n";
            }
            flag = true;
        }
        else if (choice == 2)  // bidding
        {
            cout << "Bidding for The Players" << endl;
            for (int i = 0; i < 30; i++)  // loop for player
            {
                int price[6] = {
                    -1};  // array of price for a player from each team
                cout << "Player:- ";
                cout << pname[i];
                cout << endl;
                for (int j = 0; j < 6; j++)  // loop for teams
                {
                    cout << name[j] << endl;
                    cout << "Team enter yout current Bid:- \n";
                    cin >> price[j];
                    while (inflag == true)  // error handling for same bids
                    {
                        for (int l = 0; l < 6; l++)
                        {
                            if ((price[j] == price[l] && l != j) ||
                                price[j] < 0)
                            {
                                cout
                                    << "Team enter yout current Bid(Bid amount "
                                       "is already present or Bid id less than "
                                       "zero, bid higher):- \n";
                                cin >> price[j];
                                break;
                            }
                            else
                            {
                                inflag = false;
                            }
                        }
                    }  // while ends
                    inflag = true;
                    max = -1;
                    mindex = -1;
                    for (int j = 0; j < 6;
                         j++)  // finding which team bid the most
                    {
                        if (price[j] > max)
                        {
                            max = price[j];
                            mindex = j;
                            // index which gives us the team that bid
                            // the most for ex (if mindex is 0 than
                            // Karachi kings bid the most for the player
                            // or if mindex = 1 than lahore Qalanders bids the
                            // most for the player) price[1] represents Karachi
                            // kings bid
                            // price[2] represents lahore Qalanders bids
                            // price[3] represents peshawar zalmis bids
                            // price[4] represents islamabad united bid
                            // price[5] represents Queta Gladiaters bid
                            // price[1] represents Multan Sultans bid
                        }
                    }
                }  // inner loop ends

                if (mindex == 0)  // if mindex is 0 than the player will be
                                  // given to Karachi kings
                {
                    pkk[i] = pname[i];
                }
                if (mindex == 1)  // if mindex is 1 than the player will be
                                  // given to lahore Qalanders

                {
                    plq[i] = pname[i];
                }
                if (mindex == 2)  // if mindex is 2 than the player will be
                                  // given to Peshawar Zalmi

                {
                    ppz[i] = pname[i];
                }
                if (mindex == 3)  // if mindex is 3 than the player will be
                                  // given to Islamabad united

                {
                    piu[i] = pname[i];
                }
                if (mindex == 4)  // if mindex is 4 than the player will be
                                  // given to Quetta Gladiaters

                {
                    pqg[i] = pname[i];
                }
                if (mindex == 5)  // if mindex is 5 than the player will be
                                  // given to Multan Sultan

                {
                    pms[i] = pname[i];
                }
            }  // outer loop ends
            flag = true;
        }  // choice 3 ends
        else if (choice == 3)  // Match scheduling
        {
            int count = 1;
            for (int i = 0; i < 6; i++)  // outer loop takes the first team from
                                         // the array like KArachi kings
            {
                for (int j = i + 1; j < 6; j++)
                // inner loop than takes the next team of the array
                // and Schedules matches for ex(Karachi kings vs
                // Lahore qalanders or karachi kings vs peshawar
                // zalmi)
                {
                    if (i != j)
                    // this checks that the match is not Scheduled with
                    // the same team for ex (Karachi kings vs karachi
                    // Kings or Lahore Qalanders vs lahore Qalanders)
                    {
                        cout << "Match " << count << ":- \n";
                        cout << teamA[i] << " vs " << teamB[j] << endl;
                    }
                    count++;
                }
            }
        }
        else if (choice == 4)
        {
            inflag = true;
            // it is the same as task 3 but with scores enterance and points
            int count = 1;
            for (int i = 0; i < 6; i++)
            {
                for (int j = i + 1; j < 6; j++)
                {
                    if (i != j)
                    {
                        cout << "Match " << count << ":- \n";
                        cout << teamA[i] << " vs " << teamB[j] << endl;
                        cout << "Enter the score of " << teamA[i] << ":- \n";
                        cin >> score1[count];  // score of team 1
                        while (inflag)
                        {
                            if (score1[count] < 0)
                            {
                                cout << "The score cannot be negative, Again "
                                        "enter:- \n";
                                cin >> score1[count];
                                break;
                            }
                            else
                            {
                                inflag = false;
                            }
                        }
                        inflag = true;
                        cout << "Enter the score of " << teamB[j] << ":- \n";
                        cin >> score2[count];  // score of team 2
                        while (inflag)
                        {
                            if (score2[count] < 0)
                            {
                                cout << "The score cannot be negative, Again "
                                        "enter:- \n";
                                cin >> score1[count];
                                break;
                            }
                            else
                            {
                                inflag = false;
                            }
                        }
                        inflag = true;
                        if (score1[count] > score2[count])
                        // to determine the winner(agar
                        // pheli team ka score zayada hai
                        // dosri team sai tou pheli team
                        // jeeta gi aur us ka points main 2
                        // ka izafa ho ga)
                        {
                            mplayed[i] +=
                                1;  // counter for match played by team 1
                            won[i] += 1;
                            loss[j] += 1;
                            mplayed[j] +=
                                1;  // counter for match played by team 2
                            points[i] += 2;
                            cout << "Team won:- " << teamA[i] << endl
                                 << " Points:- " << points[i] << endl;
                        }
                        else if (score1[count] <
                                 score2[count])  // to determine the winner(agar
                                                 // dosri team ka score zayada
                                                 // hai pheli team sai tou dosri
                                                 // team jeeta gi aur us ka
                                                 // points main 2 ka izafa ho
                                                 // ga)
                        {
                            mplayed[i] +=
                                1;  // counter for match played by team 1
                            mplayed[j] +=
                                1;  // counter for match played by team 2
                            points[j] += 2;
                            won[j] += 1;
                            loss[i] += 1;
                            cout << "Team won:- " << teamB[j] << endl
                                 << " Points:- " << points[j] << endl;
                        }
                        if (score1[count] == score2[count])
                        {
                            mplayed[i] +=
                                1;  // counter for match played by team 1
                            mplayed[j] +=
                                1;  // counter for match played by team 2
                            draw[i] += 1;
                            draw[j] += 1;
                            cout << "It is a draw \n";
                            points[i] += 1;
                            points[j] += 1;
                        }
                        count++;
                    }
                }
            }
        }
        else if (choice == 5)  // ya bas esa hi testing kai liya hai, ya bata ta
                               // hai kai kis team kai pas kon sa player hai
        {
            cout << "Teams                Played  Won   Lost  Draw  Points\n";
            for (int i = 0; i < 6; i++)
            {
                // Adjust spacing for names
                cout << name[i];
                int spaces =
                    20 -
                    name[i].length();  // Ensure consistent alignment for names
                while (spaces--) cout << " ";

                // Center-align numbers with padding
                cout << "  " << mplayed[i] << "    "  // Matches played
                     << "  " << won[i] << "   "       // Matches won
                     << "  " << loss[i] << "   "      // Matches lost
                     << "  " << draw[i] << "   "      // Matches drawn
                     << "  " << points[i] << endl;    // Total points
            }
        }
        else if (choice == 6)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "LAHORE QALANDERS:- " << plq[i] << "\n\n";
                cout << "Karachi Kings:- " << pkk[i] << "\n\n";
                cout << "Peshawar Zalmi:- " << ppz[i] << "\n\n";
                cout << "Islamabad united:- " << piu[i] << "\n\n";
                cout << "Quetta Gladiators:- " << pqg[i] << "\n\n";
                cout << "Multan Sultans:- " << pms[i] << "\n\n";
            }
            flag = true;
        }
        else if (choice == 7)
        {
            flag = false;
        }
    }
    return 0;
}
