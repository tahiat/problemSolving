//
//  Heap.cpp
//  ProblemSolving
//
//  Created by Tahiatul Islam on 1/15/19.
//  Copyright © 2019 xenon. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#define SIZE 100000
int N,Q;
int arr[SIZE];


void swapElement(int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void max_heapify (int arr[], int i, int size) {
    int left = 2*i ;
    int right = left +1;
    int largest ;
    if (left <= N && arr[left] > arr[i]){
        largest = left;
    } else {
        largest = i;
    }

    if (right <= N && arr[right] > arr[largest]){
        largest = right;
    }

    if (largest != i){
        swapElement(i, largest);
        max_heapify(arr, largest, size);
    }
}

void buildMaxHeap () {
    for (int i = N/2 ; i>= 1;i--){
        max_heapify(arr, i,N);
    }
}

int maximum (int arr[]) {
    return arr[1];
}

void increaseValue (int arr[], int i, int val){
    if (arr[i] > val){
        printf("cant increase the value");
        return;
    }

    arr[i] = val;

    while (i > 1 && arr[i/2] < arr[i]) {
        swapElement(i, i/2);
        i  = i/2;
    }

}

void insertValue (int arr[], int val) {
    N = N + 1;
    arr[N] = -1;
    increaseValue(arr, N, val);
}


int main () {
    freopen("input.txt", "r", stdin);
    scanf("%d",&N);
    int val;
    for (int i = 1; i<= N; i++){
        scanf("%d",&val);
        arr[i] = val;
    }
    scanf("%d",&Q);

    buildMaxHeap();

    int type, vin;
    for (int j = 0;j<Q;j++) {
        scanf("%d",&type);
        if (type == 1){
            scanf("%d",&vin);
            insertValue(arr, vin);
        } else {
            printf("%d\n",arr[1]);
            continue;
        }
    }

}
