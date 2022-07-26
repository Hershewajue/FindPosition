// Main function of the C++ program.
//@author: Hershewajue

#include <iostream>
using namespace std;

int findPosition(int, int[], int);
int biggestValue(int[], int);

int main()
{
    const int size = 10;
    int arrayOfInts[size] = {3, 5, -5, 0, 1, 4, 22, 5, -2, 0};
    cout << "The position of -2 is the " << findPosition(-2, arrayOfInts, size) << "th index" << endl;
    cout << "Max value = " << biggestValue(arrayOfInts, size) << endl;
    
    int value = biggestValue(arrayOfInts, size);
    cout << "The position of the biggest value is the "<< findPosition(value, arrayOfInts, size) << "th index" << endl;
}

int findPosition(int value, int myArray[], int size){
    int indexValue = -1; 
    for(int i = 0; i < size; i++)
       if(value == myArray[i])
         indexValue = i;
         
    return indexValue;     
}

int biggestValue(int myArray[], int size){
    int max = myArray[0];
    for(int i = 1; i < size; i++)
        if(max < myArray[i])
           max = myArray[i];
    
    return max;
}
