/*2-Digit/3-Digit Lottery Game by Hissamuddin Shaikh*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    /*Variable Setup*/
    int rand();
    int lottery_actual;
    int remaining_lottery_actual;
    int lottery_1st_digit_actual;
    int lottery_2nd_digit_actual;
    int lottery_3rd_digit_actual;
    int lottery_prediction;
    int remaining_lottery_prediction;
    int lottery_1st_digit_prediction;
    int lottery_2nd_digit_prediction;
    int lottery_3rd_digit_prediction;
    string response_3_digit;
    /*Prompt the user to enter their 2 digit prediction, for the winning lottery number*/
    cout << endl << " The St.Cloud Lottery"<< endl;
    cout << endl << " Please insert a 2 digit number, that you think will be the lucky lottery number: ";
    cin >> lottery_prediction;
    /*Error control for user's predicted lottery number*/
    while (lottery_prediction>100)
    {cout << endl << " Please insert a '2 digit number', that you think will be the lucky lottery number: ";
     cin >> lottery_prediction;}
    /*Randomly generate the 2 digit winning lottery number*/
    srand(time(NULL));
    lottery_actual = rand()%100;
    /*Error control for the generation of the winning lottery number*/
    while (lottery_actual<10)
        lottery_actual = rand()%100;
    cout << endl << " The winning lottery number is: " <<lottery_actual <<endl;
    /*Setup for 1st digit and 2nd digit extraction of the actual lottery number*/
    lottery_1st_digit_actual = lottery_actual/10;
    lottery_2nd_digit_actual = lottery_actual%10;
    /*Setup for 1st digit and 2nd digit extraction of the predicted lottery number*/
    lottery_1st_digit_prediction = lottery_prediction/10;
    lottery_2nd_digit_prediction = lottery_prediction%10;
    /*Test if the user's lottery number is the same as the winning lottery number, or if the digits are the
    or if one of the digits is the same*/
    if (lottery_actual==lottery_prediction)
        cout << endl <<" You have won 10,000 US Dollars, as you have predicted the winning lottery number correctly !!!" <<endl <<endl;
    else if (lottery_1st_digit_actual==lottery_2nd_digit_prediction && lottery_2nd_digit_actual==lottery_1st_digit_prediction)
        cout << endl <<" You have won 3000 US Dollars, as you have predicted the winning lottery digits correctly !!!" <<endl << endl;
    else if (lottery_1st_digit_actual==lottery_2nd_digit_prediction || lottery_2nd_digit_actual==lottery_1st_digit_prediction ||
            lottery_1st_digit_actual==lottery_1st_digit_prediction || lottery_2nd_digit_actual == lottery_2nd_digit_prediction)
        cout << endl <<" You have won a 1000 US Dollars, as you have predicted one of the winning lottery digits correctly !!!" <<endl << endl;
    else
        cout << endl << " Sorry, your prediction didn't win you anything :(" << endl <<endl;
    /*Set up for a 3 digit lottery game*/
    cout << endl << " Would you like to play another lottery, with a 3 digit number? (Respond Yes or No): ";
    cin >> response_3_digit; cout<< endl;
    if (response_3_digit == "Yes" || response_3_digit == "YES" || response_3_digit == "yes" || response_3_digit == "yEs" ||
        response_3_digit == "yeS" || response_3_digit == "YEs" || response_3_digit == "yES")
        /*Setup for 3 number lottery prediction*/
        {cout << endl << " Please insert a 3 digit number, that you think will be the lucky lottery number: ";
        cin >> lottery_prediction;
        /*Error control for 3 digit prediction*/
        while (lottery_prediction>1000 || lottery_prediction<100)
        {cout << endl << " Please insert a '3 digit number', that you think will be the lucky lottery number: ";
        cin >> lottery_prediction;}
        /*Setup for the generation of the winning 3 digit lottery number*/
        srand(time(NULL));
        lottery_actual = rand()%1000;
        /*Error control for the 3 digit actual lottery number*/
        while (lottery_actual<100 || lottery_actual>1000)
        lottery_actual = rand()%100;
        cout << endl << " The winning lottery number is: " <<lottery_actual <<endl;
        /*Setup for 1st digit, 2nd Digit and 3rd Digit Extraction for actual lottery number*/
        lottery_1st_digit_actual = lottery_actual/100;
        remaining_lottery_actual = lottery_actual%100;
        lottery_2nd_digit_actual = remaining_lottery_actual/10;
        lottery_3rd_digit_actual = remaining_lottery_actual%10;
        /*Setup for 1st digit, 2nd digit and 3rd digit extraction for predicted lottery number*/
        lottery_1st_digit_prediction = lottery_prediction/100;
        remaining_lottery_prediction = lottery_prediction%100;
        lottery_2nd_digit_prediction = remaining_lottery_prediction/10;
        lottery_3rd_digit_prediction = remaining_lottery_prediction%10;
        /*Test if the user's lottery number is the same as the winning lottery number, or if the digits are the
        or if one of the digits is the same*/
        if (lottery_actual==lottery_prediction)
            cout << endl <<" You have won 10,000 US Dollars, as you have predicted the winning lottery number correctly !!!" <<endl;
        else if ((lottery_1st_digit_actual==lottery_1st_digit_prediction || lottery_1st_digit_actual==lottery_2nd_digit_prediction || lottery_1st_digit_actual==lottery_3rd_digit_prediction)
                &&(lottery_2nd_digit_actual==lottery_1st_digit_prediction || lottery_2nd_digit_actual==lottery_2nd_digit_prediction || lottery_2nd_digit_actual==lottery_3rd_digit_prediction)
                &&(lottery_3rd_digit_actual==lottery_1st_digit_prediction|| lottery_3rd_digit_actual==lottery_2nd_digit_prediction ||lottery_3rd_digit_actual==lottery_3rd_digit_prediction))
            cout << endl <<" You have won 3000 US Dollars, as you have predicted the winning lottery digits correctly !!!" <<endl;
        else if ((lottery_1st_digit_actual==lottery_1st_digit_prediction || lottery_1st_digit_actual==lottery_2nd_digit_prediction || lottery_1st_digit_actual==lottery_3rd_digit_prediction)
                ||(lottery_2nd_digit_actual==lottery_1st_digit_prediction || lottery_2nd_digit_actual==lottery_2nd_digit_prediction || lottery_2nd_digit_actual==lottery_3rd_digit_prediction)
                ||(lottery_3rd_digit_actual==lottery_1st_digit_prediction|| lottery_3rd_digit_actual==lottery_2nd_digit_prediction ||lottery_3rd_digit_actual==lottery_3rd_digit_prediction))
            cout << endl <<" You have won a 1000 US Dollars, as you have predicted one of the winning lottery digits correctly !!!" <<endl;
        else
            cout << endl << " Sorry, your prediction didn't win you anything again :(" << endl;}
    else
        cout << endl << " Alright, Goodbye then." << endl;
    return 0;
}
