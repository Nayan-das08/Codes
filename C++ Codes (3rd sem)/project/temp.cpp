// open ended project

using namespace std;
# include <iostream>
# include <windows.h>     // for Sleep()
# include <stdio.h>
# include <conio.h>

# define random() rand()%size   // used for getting 'size' no. of players in each team
# define size 6          // # of players
# define Time 500        // delay duration

void dotdotdot()
{
  Sleep(Time);
	cout << ".";
	Sleep(Time);
	cout << ".";
	Sleep(Time);
	cout << ".";
	Sleep(Time);
}

class player
{
  char name[30];

  public:
    void input_info()
    {
      cout << "        Enter name   : ";
      gets(name);
    }
    char* ret_name()
    {
      return name;
    }
};

class team
{
  player p[size];
  int runs=0;

  public:
    void enter_team_info()
    {
      for (int i=0; i<size; i++)
      {
        cout << "\n    Player " << i+1 << " :-\n";
        p[i].input_info();
      }
    }
    player get_random_player()
    {
      return p[random()];
    }
    int ret_runs()
    {
      return runs;
    }
    void score()
    {
      for (int b=0; b<6; b++)       // works for 6 iterations (balls)
      {
        runs += rand() % 6;         // runs are incremented with random 
        //                             numbers from 0 to 6
      }
    }
};

class game
{
  team A, B, winner;
  player bat, bowl;
  int ball;

  public:
    void set_teams();
    void start();
    
};

void game :: set_teams()
{
  cout << "\n\nTEAM A :-";
  A.enter_team_info();
  
  cout << "\nTEAM B :-";
  B.enter_team_info();
}

void game :: start()
{
  // first inning
  bat = A.get_random_player();
  bowl = B.get_random_player();
  
  cout << "\n\nFirst innings";  dotdotdot();
  cout << "\n    Batting : " << bat.ret_name();
  cout << "\n    Bowling : " << bowl.ret_name();
  A.score();
  cout << "\n    Team A has scored " << A.ret_runs() << " runs";

  // second inning
  bat = B.get_random_player();
  bowl = A.get_random_player();
  
  cout << "\n\nSecond innings";  dotdotdot();
  cout << "\n    Batting : " << bat.ret_name();
  cout << "\n    Bowling : " << bowl.ret_name();
  B.score();
  cout << "\n    Team B has scored " << B.ret_runs() << " runs";

  // check score
  if (A.ret_runs() > B.ret_runs())
    cout << "\n\nTeam A has won the match!";
  else if (A.ret_runs() < B.ret_runs())
    cout << "\n\nTeam B has won the match!";
  else
    cout << "\n\nThe game is tied!";
}
int main()
{
  //cout << "\nCRICKET MATCH";
  cout << endl;
  cout << "xxxxxxx    xxxxxx     xx    xxxxxxx    xx    xx    xxxxxxx    xxxxxxxx" << endl
       << "xx         xx   xx    xx    xx         xx  xx      xx            xx   " << endl
       << "xx         xxxxx      xx    xx         xxxx        xxxxx         xx   " << endl
       << "xx         xx  xx     xx    xx         xx  xx      xx            xx   " << endl
       << "xxxxxxx    xx   xx    xx    xxxxxxx    xx   xx     xxxxxxx       xx   " << endl;

  srand(time(0));
  game G;

  G.set_teams();
  G.start();
  cout << "\n\n";
  getch();
  return 0;
}