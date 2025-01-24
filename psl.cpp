#include <iostream>
using namespace std;
int main()
{
    int choice, max = 0, mindex = 0;
    string name[6] = {"Karachi Kings",     "Lahore Qalandars",
                      "Peshawar Zalmi",    "Islamabad United",
                      "Quetta Gladiators", "Multan Sultans"},

           hgro[6] = {"National Stadium",   "Gaddafi Stadium",
                      "Arbab Niaz Stadium", "Rawalpindi Cricket Stadium",
                      "Bugti Stadium",      "Multan Cricket Stadium"},

           hcity[6] = {"Karachi",   "Lahore", "Peshawar",
                       "Islamabad", "Quetta", "Multan Sultans"},

           pname[30] =
               {"Babar Azam",         "Mohammad Rizwan", "Shaheen Shah Afridi",
                "Shadab Khan",        "Fakhar Zaman",    "Haris Rauf",
                "Imam-ul-Haq",        "Naseem Shah",     "Hasan Ali",
                "Iftikhar Ahmed",     "Mohammad Nawaz",  "Usama Mir",
                "Abrar Ahmed",        "Saim Ayub",       "Agha Salman",
                "Mohammad Wasim Jr.", "Shan Masood",     "Sarfaraz Ahmed",
                "Mohammad Haris",     "Khushdil Shah",   "Mohammad Hasnain",
                "Zaman Khan",         "Tayyab Tahir",    "Ihsanullah",
                "Kamran Ghulam",      "Mohammad Ali",    "Mir Hamza",
                "Faheem Ashraf",      "Saud Shakeel",    "Abdullah Shafique"},

           prole[30] = {"Batsman",      "Wicketkeeper", "Bowler",
                        "All-rounder",  "Batsman",      "Bowler",
                        "Batsman",      "Bowler",       "Bowler",
                        "All-rounder",  "All-rounder",  "Bowler",
                        "Bowler",       "Batsman",      "Batsman",
                        "All-rounder",  "Batsman",      "Wicketkeeper",
                        "Wicketkeeper", "Batsman",      "Bowler",
                        "Bowler",       "Batsman",      "Bowler",
                        "Batsman",      "Bowler",       "Bowler",
                        "Bowler",       "Batsman",      "Batsman"}

    ,
           plq[30] = {" "}, pkk[30] = {" "}, ppz[30] = {" "}, piu[30] = {" "},
           pqg[30] = {" "}, pms[30] = {" "};

    int price[6] = {-1};
    bool flag = true, inflag = true;
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
        else if (choice == 2)
        {
            cout << "Bidding for The Players" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Player:- ";
                cout << pname[i];
                cout << endl;
                for (int j = 0; j < 6; j++)
                {
                    cout << name[j] << endl;
                    cout << "Team enter yout current Bid:- \n";
                    cin >> price[j];
                    while (inflag == true)
                    {
                        for (int l = 0; l < 6; l++)
                        {
                            if (price[j] == price[l] && l != j)
                            {
                                cout
                                    << "Team enter yout current Bid(Bid amount "
                                       "is already present, bid higher):- \n";
                                cin >> price[j];
                                break;
                            }
                            else
                            {
                                inflag = false;
                            }
                        }
                    }
                }
                for (int j = 0; j < 6; j++)
                {
                    inflag = true;
                    mindex = -1;
                    max = 0;
                    for (int k = 0; k < 6; k++)
                    {
                        if (price[k] > max)
                        {
                            max = price[k];
                            mindex = k;
                        }
                    }
                    cout << mindex << " ";
                    if (mindex == 0)
                    {
                        pkk[i] = pname[i];
                    }
                    if (mindex == 1)
                    {
                        plq[i] = pname[i];
                    }
                    if (mindex == 2)
                    {
                        ppz[i] = pname[i];
                    }
                    if (mindex == 3)
                    {
                        piu[i] = pname[i];
                    }
                    if (mindex == 4)
                    {
                        pqg[i] = pname[i];
                    }
                    if (mindex == 5)
                    {
                        pms[i] = pname[i];
                    }
                }
                int price[6] = {-1};
            }
            flag = true;
        }
        else if (choice == 3)
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
        else if (choice == 4)
        {
            flag = true;
        }
        else if (choice == 5)
        {
            flag = true;
        }
        else if (choice == 6)
        {
            flag = false;
        }
    }
    return 0;
}
