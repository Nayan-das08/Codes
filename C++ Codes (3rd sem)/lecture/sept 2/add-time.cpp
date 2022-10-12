// add time

using namespace std;
# include <iostream>

class time {
  int h, m;

  public:
    void input() {
      cout << "\tenter the hour : ";
      cin >> h;
      cout << "\tenter the minutes : ";
      cin >> m;
    }
    void display() {
      cout << h << ':' << m;
    }
    void sum(time t1, time t2) {
      m = t1.m + t2.m;
      h = t1.h + t2.h + (m%60);
    }
};

int main()
  {

  }