#include <iostream>
using namespace std;

int main() 
{
    int number;
    int number1;
    int number2;
    
    cout << "Enter Month ";
    
    cin >> number;
    
    cout << "Enter Day ";
    
    cin >> number1;
    
    cout << "Enter Year ";
    
    cin >> number2;

   if (number1 > 31 )
    {
        cout << "Invalid Date "  << endl;
    }
   
    else if ( number == 1)
    {
        cout << "January " << number1 << "," << number2 << endl;
    }
    
    else if (number ==2 )
    {
        cout << "February " << number1 << "," << number2 << endl;
    }
    else if (number ==3 )
    {
        cout << "March " << number1 << "," << number2 << endl;
    }
    else if (number ==4 )
    {
        cout << "April " << number1 << "," << number2 << endl;
    }
    else if (number ==5 )
    {
        cout << "May " << number1 << "," << number2 << endl;
    }
    else if (number ==6 )
    {
        cout << "June " << number1 << "," << number2 << endl;
    }
    else if (number ==7 )
    {
        cout << "July " << number1 << "," << number2 << endl;
    }
    else if (number ==8 )
    {
        cout << "August " << number1 << "," << number2 << endl;
    }
    else if (number ==9 )
    {
        cout << "September " << number1 << "," << number2 << endl;
    }
    else if (number ==10 )
    {
        cout << "October " << number1 << "," << number2 << endl;
    }
    else if (number ==11 )
    {
        cout << "November " << number1 << "," << number2 << endl;
    }
    else if (number ==12 )
    {
        cout << "December " << number1 << "," << number2 << endl;
    }
    
    
    
    else if (number > 12 )
    {
        cout << "Invalid date "  << endl;
    }
   

    
    return 0;
}
