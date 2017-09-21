/*
 * =====================================================================================
 *
 *       Filename:  Daryl_Adams_hw2_task1.cpp
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *       Compiler:  C++
 *         Author:  Daryl Adams CS1410
 *   Organization:
 * =====================================================================================
 */
#include <iostream>
using namespace std;
/*  Structures/Constants */
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

// Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

/* Main Program */
int main(int argc, char* argv[]) {
    //Get user info for the first
    cout << "Enter info for first house\n";
    struct house firstHouse = InputHouse();

    cout << "\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /* Based on comparison value, use a switch
     * statement to display all posibilities:
     * 1) "the first house is cheaper"
     * 2) "the two houses are equally expensive"
     * 3) "the second house is cheaper"
     * 4) "invalid comparison value there must be a bug"
     */

    // Check case and print result
    switch (comparison)
    {
        case 1:
            cout<<"the first house is cheaper";
            break;
        case 2:
            cout<<"the two houses are equally expensive";
            break;
        case 3:
            cout<<"the second house is cheaper";
            break;
        case 4:
            cout<<"invalid comparison value there must be a bug";
            break;
    }

    return 0;
}

/* Function Defenitions */
struct house InputHouse(void)
{
    house h;

    // Ask user for street number
    cout <<"Please enter the street number ";
    cin >> h.streetNum;
    // Ask user for street name
    cout <<"Please enter the street name ";
    cin >> h.streetName;
    // Ask user for house price
    cout <<"Please enter the price ";
    cin >> h.price;
    cout<< "" << endl;
        return h;
}


void PrintHouse(int houseNum, struct house h)
{
    //Print resuts house 1 and 2
    cout <<houseNum << " House: at " << h.streetNum;
    cout <<" " << h.streetName << " for $[" << h.price <<"]" <<endl;

}

//check to see if house 1 is >, <, or  == house 2 and return int i
int ComparePrices(struct house h1, struct house h2)
{
   int i;

    if(h1.price < h2.price)

        i = 1;
    else if(h1.price == h2.price)

        i = 2;
    else if(h1.price > h2.price)
        i = 3;
    else i = 4;

    return i;
}