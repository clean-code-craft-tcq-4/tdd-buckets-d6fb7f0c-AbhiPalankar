#include <stdio.h>
#include <assert.h>

extern int rangeCount[];
extern int chrgSession[];
extern int rangeCount[];

void chkrange();
void checkRange(int array[], int size);
void printReadings(int array[], int size);
void swapValues(int* value1, int* value2);
void logdata(int array[]);
int partition(int array[], int lowIndex, int highIndex);
void sortRange(int array[], int lowIndex, int highIndex);
