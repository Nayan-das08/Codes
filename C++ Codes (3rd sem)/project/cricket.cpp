// open ended project

using namespace std;
# include <iostream>
# include <stdio.h>
# include <string.h>
# define size 3

class player
{
  int age;
  char name[30], gender[6];

  public:
    void input_info()
    {
      cout << "        Enter name   : ";
      gets(name);
      cout << "        Enter age    : ";
      cin >> age;
      cout << "        Enter gender : ";
      cin.ignore();
      gets(gender);
    }
    void show_info()
    {
      
      cout << "        Name     : " << name   << endl
           << "        Age      : " << age    << endl
           << "        Gender   : " << gender << endl;
    }
};

class team
{
  player p[size];

  public:
    void enter_team_info()
    {
      //cout << "TEAM A :-\n";
      for (int i=0; i<size; i++)
      {
        cout << "\n    Player " << i+1 << " :-\n";
        p[i].input_info();
      }
    }
    void show_team_info()
    {
      for (int i=0; i<size; i++)
      {
        cout << "\n    Player " << i+1 << " :-\n";
        p[i].show_info();
      }
    }
};


int main()
{
  team A, B;

  cout << "Enter the Team Info :-";
  cout << "\n\nTEAM A :-";
  A.enter_team_info();
  cout << "\n\nTeam Info :-";
  A.show_team_info();

  return 0;
}

