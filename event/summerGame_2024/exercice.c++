#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/


class HurdleRace{
    public:
        int player1Pos;
        int player2Pos;
        int player3Pos;
        string parkour;
        int stunP1;
        bool priority;
};

class BowShoot{
    public:
        int player1X;
        int player1Y;
        int player2X;
        int player2Y;
        int player3X;
        int player3Y;
        string wind;
        bool priority;
};

class Roller{
    public:
    int player1Pos;
    int player2Pos;
    int player3Pos;
    int player1risk;
    int player2risk;
    int player3risk;
    string parkour;
    bool priority;
};

class ArtisticDiving{
    public:
    int scorePlayer1;
    int scorePlayer2;
    int scorePlayer3;
    int comboPlayer1;
    string dive;
    bool priority;
};

class Player{
    public:
    int game1_player_pos;
    int game2_player_x;
    int game2_player_y;
    int game3_risk;
    
};

Player player_data(int index, HurdleRace game_1, BowShoot game_2, Roller game_3)
{
    Player p;
    if (index == 0)
    {
        p.game1_player_pos = game_1.player1Pos;
        p.game2_player_x = game_2.player1X;
        p.game2_player_y = game_2.player1Y;
        p.game3_risk = game_3.player1risk;
    }
    else if (index == 1)
    {
        p.game1_player_pos = game_1.player2Pos;
        p.game2_player_x = game_2.player2X;
        p.game2_player_y = game_2.player2Y;
        p.game3_risk = game_3.player2risk;

    }
    else if (index == 2)
    {
        p.game1_player_pos = game_1.player3Pos;
        p.game2_player_x = game_2.player3X;
        p.game2_player_y = game_2.player3Y;
        p.game3_risk = game_3.player3risk;
    }

    return p;
}

void readParcour(string p1, string p2, string p3, string p4)
{
    cerr << "Minijeu 1: " << p1 << endl;
    cerr << "Minijeu2: " << p2 << endl;
    cerr << "Minijeu3: " << p3 << endl;
    cerr << "Minijeu4: " << p4 << endl;
}

bool is_a_hardle(string p1, int pos, char a)
{
    while (p1[pos] != '\0')
    {
        if (p1[pos] == a)
            return true;
        pos++;
    }
    return false;

}

bool is_a_three_tour(string p2)
{
    if(p2.length() <= 3)
        return true;   
    return false;
}

int absol(int n)
{
    if (n < 0)
        return(n * -1);
    return (n);
}


void bestMvt(int choise)
{
    if (choise == 1)
        cout << "RIGHT" << endl;
    else if (choise == 2)
        cout << "DOWN" << endl;
    else if (choise == 3)
        cout << "LEFT" << endl;
    else if (choise == 4)
        cout << "UP" << endl;
}


int main()
{
    int player_idx;
    cin >> player_idx; cin.ignore();
    int nb_games;
    cin >> nb_games; cin.ignore();
    int choise = 0;
    HurdleRace miniGame1;
    BowShoot miniGame2;
    Roller miniGame3;
    ArtisticDiving miniGame4;


    // game loop
    while (1) {
        for (int i = 0; i < 3; i++) {
            string score_info;
            getline(cin, score_info);
        }
        for (int i = 0; i < nb_games; i++) {
            string gpu;
            int reg_0;
            int reg_1;
            int reg_2;
            int reg_3;
            int reg_4;
            int reg_5;
            int reg_6;
            cin >> gpu >> reg_0 >> reg_1 >> reg_2 >> reg_3 >> reg_4 >> reg_5 >> reg_6; cin.ignore();
            if (i == 0)
            {
                miniGame1.parkour = gpu;
                miniGame1.player1Pos = reg_0;
                miniGame1.player2Pos = reg_1;
                miniGame1.player3Pos = reg_2;
                miniGame1.stunP1 = reg_4;
                miniGame1.priority = false;
            }
            else if (i == 1)
            {
                miniGame2.player1X = reg_0;
                miniGame2.player1Y = reg_1;
                miniGame2.player2X = reg_2;
                miniGame2.player2Y = reg_3;
                miniGame2.player3X = reg_4;
                miniGame2.player3Y = reg_5;
                miniGame2.wind = gpu;
                miniGame2.priority = false;
                
            }
            else if (i == 2)
            {
                miniGame3.player1Pos = reg_0;
                miniGame3.player2Pos = reg_1;
                miniGame3.player3Pos = reg_2;
                miniGame3.player1risk = reg_3;
                miniGame3.player2risk = reg_4;
                miniGame3.player3risk = reg_5;
                miniGame3.parkour = gpu;
                miniGame3.priority = false;
            }
            else if (i == 3)
            {
                miniGame4.scorePlayer1 = reg_0;
                miniGame4.scorePlayer2 = reg_1;
                miniGame4.scorePlayer3 = reg_2;
                miniGame4.comboPlayer1  = reg_3;
                miniGame4.dive = gpu;
                miniGame4.priority = false;
            }
        }
        readParcour(miniGame1.parkour, miniGame2.wind, miniGame3.parkour, miniGame4.dive); 
        Player p = player_data(player_idx, miniGame1, miniGame2, miniGame3);
        cerr << "player x: " << p.game2_player_x << endl;
        cerr << "player y: " << p.game2_player_y << endl;
        cerr << "risk: " << p.game3_risk << endl;

        for (int i = 0; i < nb_games; i++)
        {
            if (is_a_hardle(miniGame1.parkour, p.game1_player_pos, '#'))
            {
                cerr << "boucle1" << endl;
                if(miniGame1.parkour[p.game1_player_pos + 3] != '#' &&
                miniGame1.parkour[p.game1_player_pos + 2] != '#' &&
                miniGame1.parkour[p.game1_player_pos + 1] != '#')
                    choise = 1;
                else if (miniGame1.parkour[p.game1_player_pos +2] != '#' &&
                miniGame1.parkour[p.game1_player_pos + 1] != '#')
                    choise = 2;
                else if (miniGame1.parkour[p.game1_player_pos + 1] != '#')
                    choise = 3;
                else
                    choise = 4;
            }
            else if (is_a_three_tour(miniGame2.wind) && !is_a_hardle(miniGame1.parkour, p.game1_player_pos, '#'))
            {
                cerr << "boucle2" << endl;
                int wind_effect = miniGame2.wind[0] + '0';
                if (p.game2_player_x < -2)
                    {
                        cerr << "R boucle" << endl;
                        if (p.game2_player_y < 0)
                        {
                            if (absol(p.game2_player_x) < absol(p.game2_player_y))
                                choise = 2;
                            else
                                choise = 1;
                        }
                        else if (p.game2_player_y > 0)
                        {
                            if (absol(p.game2_player_x)< p.game2_player_y)
                                choise = 4;
                            else
                                choise = 1;
                        }
                        
                    }
                else if (p.game2_player_y > 2)
                    {
                        cerr << "D boucle" << endl;
                        if (p.game2_player_x < 0)
                        {
                            if (p.game2_player_y < absol(p.game2_player_x))
                                choise = 1;
                            else
                                choise = 4;
                        }
                        else if (p.game2_player_x > 0)
                        {
                            if (p.game2_player_y < p.game2_player_x)
                                choise = 3;
                            else
                                choise = 4;
                        }                    
                    }
                else if (p.game2_player_x > 2)
                    {
                        cerr << "L boucle" << endl;
                        if (p.game2_player_y < 0)
                        {
                            if (p.game2_player_x < absol(p.game2_player_y))
                                choise  = 2;
                            else
                                choise = 3;
                        }
                        else if (p.game2_player_y > 0)
                        {
                            if (p.game2_player_x < p.game2_player_y)
                                choise = 4;
                            else
                                choise = 3;
                        }
                    }
                else if (p.game2_player_y < -2)
                    {
                        cerr << "U boucle" << endl;
                        if (p.game2_player_x < 0)
                        {
                            if (absol(p.game2_player_y) < absol(p.game2_player_x))
                                choise = 1;
                            else
                                choise = 2;
                        }
                        else if (p.game2_player_x > 0)
                        {
                            if (absol(p.game2_player_y) < p.game2_player_x)
                                choise = 3;
                            else
                                choise = 2;
                        }
                    }
            }
            else
            {
                cerr << "boucle4" << endl;
                if (miniGame4.dive[0] == 'U')
                    choise = 4;
                else if (miniGame4.dive[0] == 'L')
                    choise = 3;              
                else if (miniGame4.dive[0] == 'R')
                    choise = 1;
                else if (miniGame4.dive[0] == 'D')
                    choise = 2;
            }           
        }
        bestMvt(choise);
    }
}