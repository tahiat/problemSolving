//
//  main.cpp
//  ProblemSolving
//
//  Created by Tahiatul Islam on 7/4/18.
//  Copyright © 2018 xenon. All rights reserved.
//

#include <iostream>
using namespace std;



void arrayPrintngWithPointer () {
    int v[3] = {3,5,8};

    int *ptr;

    ptr = &v[0];
    cout<<"element of array are \n";

    cout << ptr[0] << "  "<<ptr[1]<<" "<<ptr[2]<<"\n";
}

void pointerDetail(){
    int var = 10;

    int *ptr = &var;


    printf("content of ptr = %d",*ptr);
    printf("\n content address of ptr = %p",ptr);
    printf("\n address of ptr = %p\n", &ptr);
}

int main() {
    // insert code here...

//    arrayPrintngWithPointer();
    pointerDetail();

    return 0;
}
