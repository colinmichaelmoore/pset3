/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm


    int left = 0;
    int right = n - 1;
    int counter = n;
    int pos = (n - 1) / 2;
    if (n < 0) {
        return false;
    }

    do {

        //Return true if value found
        if (value == values[pos]) {

            return true;

        }
        else if (value > values[pos]){
            //search right side
            left = pos + 1;
            counter--;

            pos = left + (right - left) / 2;
        }
        else if(value < values[pos]){
            //search left side
            right = pos;
            counter--;

            pos = left + (right - left) / 2;

        }


    } while (counter > 0);
    //Return false if not found
    return false;
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    //bool sorted = false
    int tmp = 0;
    int counter = n;
    // TODO: implement a sorting algorithm
    if(n < 0){
        return;
    }
    do {
        for (int i = 0; i < n - 1; i++){

            if (values[i] > values[i + 1]){
                tmp = values[i] ;
                values[i] = values[i + 1];
                values[i + 1] = tmp;
            }


        }
        counter--;
    } while(counter > 0);


    return;
}

