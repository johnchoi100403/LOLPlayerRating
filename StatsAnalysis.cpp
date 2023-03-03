#include "PlayerStats.cpp"

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class StatsAnalysis
{
private:
    double rating;
    string grade;
    double laneRate;

public:
    inline double getRating()
    {
        return rating;
    }
    inline string getLetterGrade()
    {
        if (rating > 90)
        {
            grade = "A";
        }
        if (rating > 79.9 && rating < 90)
        {
            grade = "B";
        }
        if (rating > 69.9 && rating < 80)
        {
            grade = "C";
        }
        if (rating > 59.9 && rating < 70)
        {
            grade = "D";
        }
        if (rating < 59.9)
        {
            grade = "F";
        }

        if ((int)rating % 10 > 7)
        {
            grade += "+";
        }
        if ((int)rating % 10 < 3.0)
        {
            grade += "-";
        }
    }
    int getLaneRating()
    {
        return laneRate;
    }
    void calculateLaneRate()
    {
    }
};
