#include <iostream>
using namespace std;

// making stars shap
int main()
{


    //* first shape
    /*
    int x;
    cout << "enter the number for stars rows: ";
    cin >> x;

    int rows_numbers = 0;
    while (rows_numbers <= x)
    {
        int stars = 1;
        while (stars <= rows_numbers)
        {
            cout << "*";
            stars++;
        }
        cout << "\n";
        rows_numbers++;
    }
    */

    //* second shape
    int x;
    cout << "enter the number for the rows: ";
    cin >> x;
    int stars = 1;
    int space = x - 1;
    int line_number = 1;

    while (line_number <= x) {
        int i = 1;
        while (i <= space) {
            cout << ' ';
            i++;
        }
        int j = 1;
        while (j <= stars)
        {   
            cout << "*";
            j++;
        }
        cout << "\n";
        line_number++;
        stars += 2;
        space--;
    }





    return 0;
}