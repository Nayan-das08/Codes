// class shape

using namespace std;
# include <iostream>
# include <stdio.h>
# include <string.h>

class shape
  {
    private:
      float radius, length, width;

    public:
      shape(char f[])
        {
          //strcpy(form_factor, f);
          //form_factor = f;
        }
      void input_data()
        {
          cout << "\n\tEnter model no : ";
          cin >> model_no;
          cout << "\tenter brand name : ";
          cin >> brand_name;
          cout << "\tenter model name : ";
          cin >> model_name;
          cout << "\tenter price : ";
          cin >> price;
        }
      void display_data()
        {
          cout << "\n\tmodel number : " << model_no
               << "\n\tbrand : " << brand_name
               << "\n\tmodel name : " << model_name
               << "\n\tprice : " << price
               << "\n\tform factor : " << form_factor << endl;
        }
      
  };

int main()
  {
    char a[] = "touchscreen", b[] = "keypad", c[] = "touchscreen and foldable"; 
    //phone m1("touchscreen"), m2("keypad"), m3("touchscreen and foldable");
    //phone m1('a'), m2('b'), m3('c');
    phone m1(a), m2(b), m3(c);
    int n, i;

    cout << "\n\nEnter the details of the employees :-\n";
    
    cout << "\nPHONE 1";
    m1.input_data();
    
    cout << "\nPHONE 2";
    m2.input_data();
    
    cout << "\nPHONE 3";
    m3.input_data();
    
    cout << "\n\nThe employee details in the database are :-\n";

    cout << "\nPHONE 1";
    m1.display_data();
    
    cout << "\nPHONE 2";
    m2.display_data();
    
    cout << "\nPHONE 3";
    m3.display_data();
    
    return 0;
  }