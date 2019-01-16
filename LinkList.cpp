//
//  LinkList.cpp
//  ProblemSolving
//
//  Created by Tahiatul Islam on 7/6/18.
//  Copyright © 2018 xenon. All rights reserved.
//

#include <stdio.h>
#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next = NULL;
};

Node *root;

//MARK: create a node

Node* createNode (){
    Node *temp = (Node*) malloc(sizeof(Node));
    return temp;
}


//Mark: append in link list
void append(int data){
    if (root == NULL){
        root = createNode();
        root->data = data;
        root->next = NULL;

        return;
    }

    Node *head = root;

    while (head->next != NULL) {
        head = head->next;
    }

    Node* temp = createNode();
    temp->data = data;
    temp->next = NULL;
    head->next = temp;


}

int main () {
    freopen("input.rtg", "r", stdin);

    int value;
    for (int i = 0;i < 5; i++){
        scanf("%d",&value);
        append(value);
    }
}
