#include <string>

using namespace std;

class PlayerStats
{
private:
    string champName;
    string champClass;
    int gameTime;
    int cspm10, cspm20, kills, deaths, assists, ccScore, visScore;
    int dmgToChamps, dmgToTurrets;
    int dmgHealed;
    int objHelped, gold, apm;

public:
    PlayerStats(string name, string chClass, int time, int cs10, int cs20, int k, int d,
                int as, int cc, int vis, int dTC, int dTT, int dHeal, int obj, int g, int at)
    {
        champName = name;
        champClass = chClass;
        gameTime = time;
        cspm10 = cs10;
        cspm20 = cs20;
        kills = k;
        deaths = d;
        assists = as;
        ccScore = cc;
        visScore = vis;
        dmgToChamps = dTC;
        dmgToTurrets = dTT;
        dmgHealed = dHeal;
        objHelped = obj;
        gold = g;
        apm = at;
    }
    inline string getChampName()
    {
        return champName;
    }
    inline string getChampClass()
    {
        return champClass;
    }
    inline int getCSPM10()
    {
        return cspm10 / 10;
    }
    inline int getCSPM20()
    {
        return cspm20 / 20;
    }
    inline int getKills()
    {
        return kills;
    }
    inline int getDeaths()
    {
        return deaths;
    }
    inline int getAssists()
    {
        return assists;
    }
    inline double getKD()
    {
        double killsTemp = kills * 1.0;
        return killsTemp / deaths;
    }
    inline double getKDA()
    {
        double deathsTemp = deaths * 1.0;
        return (kills + assists) / deathsTemp;
    }
    inline int getCCScore()
    {
        return ccScore;
    }
    inline int getVisScore()
    {
        return visScore;
    }
    inline int getDmgToChamp()
    {
        return dmgToChamps;
    }
    inline int getDmgToTurrets()
    {
        return dmgToTurrets;
    }
    inline int getDmgHealed()
    {
        return dmgHealed;
    }
    inline int objHelped()
    {
        return objHelped;
    }
    inline int getGold()
    {
        return gold;
    }
    inline int getAPM()
    {
        return apm;
    }
};