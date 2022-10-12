/*
Consider an example of book shop which sells books and video tapes. 
These two classes are inherited from base class called media. 
The media class has command data members such as title and publication. 
The book class has data members for storing number of pages in a book and 
tape class has playing time in a tape. Each class will have member functions 
such as read () and show (). In the base class, these members have to be defined 
as virtual functions. Write a program to models the class hierarchy for book shop 
and processes objects of these classes using pointers to base class. 
Write the rules of virtual functions.
*/

using namespace std;
#include <iostream>
#include <stdio.h>

class media //abstract base class -> used as 'interface class'
{
protected:
  char title[30];
  char pub[30];

public:
  virtual void getInfo() = 0;
  virtual void showInfo() = 0;
};

class book : public media
{
  int pgno;

public:
  void getInfo()
  {
    cout << "Enter title of the book : ";
    gets(title);
    cout << "Enter publication : ";
    gets(pub);
    cout << "Enter no. of pages in the book : ";
    cin >> pgno;
  }
  void showInfo()
  {
    cout << "\nTitle : " << title;
    cout << "\nPublication : " << pub;
    cout << "\nThe no. of pages in the book = " << pgno;
  }
};

class tape : public media
{
  int duration;

public:
  void getInfo()
  {
    //char buffer;          not needed when using cin.ignore()
    //scanf("%c", &buffer);
    cout << "Enter title of the video tape : ";
    cin.ignore();
    gets(title);
    cout << "Enter publication : ";
    gets(pub);
    cout << "Enter duration of the video tape : ";
    cin >> duration;
  }
  void showInfo()
  {
    cout << "\nTitle : " << title;
    cout << "\nPublication : " << pub;
    cout << "\nThe duration of the video tape = " << duration;
  }
};

int main()
{

  media *m;
  book b;
  tape t;

  m = &b;
  m->getInfo();
  m->showInfo();

  m = &t;
  m->getInfo();
  m->showInfo();

  return 0;
}