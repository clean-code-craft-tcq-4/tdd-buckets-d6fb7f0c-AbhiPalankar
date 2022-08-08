#include "EVStation.h"
void testswapValues()
{
    int testValue1 = 10, testValue2 = 20;
    swapValues(&testValue1, &testValue2);
    assert((testValue1==20) && (testValue2==10));
}

void testpartition()
{
    int testArray[] = {30, 10, 20};
    int testArraySize = sizeof(testArray)/sizeof(testArray[0]);
    partition(testArray, 0, testArraySize-1);
    assert((testArray[0]==10) && (testArray[1]==20));
}

void testsortRange()
{
    int testArray1[] = {30, 50, 40, 20};
    int testArray1Size = sizeof(testArray1)/sizeof(testArray1[0]);
    sortRange(testArray1, 0, testArray1Size-1);
    assert((testArray1[0]==20) && (testArray1[1]==30) && (testArray1[2]==40) && (testArray1[3]==50));
}

void testchkrange()
{
    chkrange();
    assert(rangeCount[0] == 4);
    assert(rangeCount[1] == 3);
    assert(rangeCount[2] == 1);
}

void testcheckRange()
{
    checkRange(chrgSession, 7);
    assert(rangeCount[0] == 4);
    assert(rangeCount[1] == 3);
    assert(rangeCount[2] == 4);
}

int main()
{
    testswapValues();
    testpartition();
    testsortRange();
    testchkrange();
    testcheckRange();
    return 0;
}
