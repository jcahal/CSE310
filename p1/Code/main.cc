#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define NO_TEAMS      32 // Number of NFL teams
#define TEAM_NAME_LEN 25 // Maximum team name string length
#define TOP_LEN        6 // Maximum time of possession string length


// Structs
struct team_stats{
    char team_name[ TEAM_NAME_LEN ]; // Name of NFL team
    int games; // Number of games played in the season
    float pts_per_game; // Points per game
    int total_points; // Total points
    int scrimmage_plays; // Scrimmage plays
    float yds_per_game; // Yards per game
    float yds_per_play; // Yards per play
    float first_per_game; // First downs per game
    int third_md; // Third down conversions
    int third_att; // Third down attempts
    int third_pct; // Third down percentage
    int fourth_md; // Fourth down conversions
    int fourth_att; // Fourth down attempts
    int fourth_pct; // Fourth down percentage
    int penalties; // Number of penalties
    int pen_yds; // Penalty yards
    char top_per_game[ TOP_LEN ]; // Time of possession per game
    int fum; // Number of fumbles
    int lost; // Fumbles lost
    int to; // Turnover ratio
};

struct annual_stats{
    int year;
    struct team_stats teams[ NO_TEAMS ];
};

// Variables
struct annual_stats _2010, _2011, _2012, _2013, _2014, _2015;
int i = 0;
char teamLocation[25];
char teamName[25];

// Functions Prototypes
void initializeData();

int main(int argc, char* argv[]) {

    freopen("2010-2015-team-stats.txt", "r", stdin);
    freopen("2010-2015-team-processed.txt", "w", stdout);

    initializeData();

    fclose(stdin);
    fclose(stdout);

    return 0;
}

// Function Definitions
void initializeData() {

    //scanf("%d", &i); // for the 1

    // fill single team for one year
    /*
    scanf("%d", &_2015.year);

    scanf("%25s %25s\t%d\t%f\t%d\t%d\t%f\t%f\t%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%6s\t%d\t%d\t%d",
          teamLocation, teamName, &_2015.teams[0].games, &_2015.teams[0].pts_per_game, &_2015.teams[0].total_points,
          &_2015.teams[0].scrimmage_plays, &_2015.teams[0].yds_per_game, &_2015.teams[0].yds_per_play,
          &_2015.teams[0].first_per_game, &_2015.teams[0].third_md, &_2015.teams[0].third_att,
          &_2015.teams[0].third_pct, &_2015.teams[0].fourth_md, &_2015.teams[0].fourth_att, &_2015.teams[0].fourth_pct,
          &_2015.teams[0].penalties, &_2015.teams[0].pen_yds, _2015.teams[0].top_per_game, &_2015.teams[0].fum,
          &_2015.teams[0].lost, &_2015.teams[0].to);

    strcat(_2015.teams[0].team_name, teamLocation);
    strcat(_2015.teams[0].team_name, " ");
    strcat(_2015.teams[0].team_name, teamName);

    printf("%s\t%d\t%f\t%d\t%d\t%f\t%f\t%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%s\t%d\t%d\t%d\n",
           _2015.teams[0].team_name, _2015.teams[0].games, _2015.teams[0].pts_per_game, _2015.teams[0].total_points,
           _2015.teams[0].scrimmage_plays, _2015.teams[0].yds_per_game, _2015.teams[0].yds_per_play,
           _2015.teams[0].first_per_game, _2015.teams[0].third_md, _2015.teams[0].third_att, _2015.teams[0].third_pct,
           _2015.teams[0].fourth_md, _2015.teams[0].fourth_att, _2015.teams[0].fourth_pct, _2015.teams[0].penalties,
           _2015.teams[0].pen_yds, _2015.teams[0].top_per_game, _2015.teams[0].fum, _2015.teams[0].lost,
           _2015.teams[0].to);
    */


    // fill all teams for one year
    /*
    for(i = 0; i < NO_TEAMS; i++) {

        scanf("%d", &_2015.year);

        scanf("%25s %25s\t%d\t%f\t%d\t%d\t%f\t%f\t%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%6s\t%d\t%d\t%d",
              teamLocation, teamName, &_2015.teams[i].games, &_2015.teams[i].pts_per_game, &_2015.teams[i].total_points,
              &_2015.teams[i].scrimmage_plays, &_2015.teams[i].yds_per_game, &_2015.teams[i].yds_per_play,
              &_2015.teams[i].first_per_game, &_2015.teams[i].third_md, &_2015.teams[i].third_att,
              &_2015.teams[i].third_pct, &_2015.teams[i].fourth_md, &_2015.teams[i].fourth_att, &_2015.teams[i].fourth_pct,
              &_2015.teams[i].penalties, &_2015.teams[i].pen_yds, _2015.teams[i].top_per_game, &_2015.teams[i].fum,
              &_2015.teams[i].lost, &_2015.teams[i].to);

        strcat(_2015.teams[i].team_name, teamLocation);
        strcat(_2015.teams[i].team_name, " ");
        strcat(_2015.teams[i].team_name, teamName);

        printf("%s\t%d\t%f\t%d\t%d\t%f\t%f\t%f\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%s\t%d\t%d\t%d\n",
               _2015.teams[i].team_name, _2015.teams[i].games, _2015.teams[i].pts_per_game, _2015.teams[i].total_points,
               _2015.teams[i].scrimmage_plays, _2015.teams[i].yds_per_game, _2015.teams[i].yds_per_play,
               _2015.teams[i].first_per_game, _2015.teams[i].third_md, _2015.teams[i].third_att, _2015.teams[i].third_pct,
               _2015.teams[i].fourth_md, _2015.teams[i].fourth_att, _2015.teams[i].fourth_pct, _2015.teams[i].penalties,
               _2015.teams[i].pen_yds, _2015.teams[i].top_per_game, _2015.teams[i].fum, _2015.teams[i].lost,
               _2015.teams[i].to);
    }
    */
}