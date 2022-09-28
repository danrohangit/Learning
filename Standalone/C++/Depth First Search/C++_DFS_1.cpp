//
// Better graph example uploaded as jpeg in folder
//   4  9 
//  2    5
// 1  6  7    
//  3  8
//  10 
//
//
//

// Self made question:
// Based on jpeg image, use dfs, start at node 1, once node 5 and 9 detected back to back, end program

#include <iostream>;
#include <bits/stdc++.h>;

using namespace std;

// create a something to store number combinations e.g 1->2->4
// create a something to store if that number has been visited -> 0 to 1
// create recursive dfs thing to search tree to find 5 -> 9?
// Create something that if 5 is detected, the next should be 9 and if true
// stop the program as 5 -> 9 is found, else revert bool back to false

void continueDFS(int i,vector<int>storeCombinations[],int visitedNode[],bool firstNodeDetected){
    visitedNode[i] = 1;
    cout<<i+1<<" ";

// Start of code to comment out to run DFS fully +++++++++++++++++++++++++++++++++++++++++++++++++++++   
    if (firstNodeDetected == true){
        if (i+1 == 9){
            cout<<"\n";
            cout<<"\n 5 -> 9 Found!";
            exit(0);
        }
        else{
            firstNodeDetected = false;
        }
    }
    
    if (i+1 == 5){
        firstNodeDetected = true;
    }
// End of code to comment out to run DFS fully +++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    
    for (int j:storeCombinations[i]){
        if(visitedNode[j] == 0){
            continueDFS(j,storeCombinations,visitedNode,firstNodeDetected);
        }
    }
}

void performDFS(vector<int>storeCombinations[],int numberOfNodes,int visitedNode[],bool firstNodeDetected){
    for (int i=0;i<numberOfNodes;i++){
        if(visitedNode[i]==0){
            continueDFS(i,storeCombinations,visitedNode,firstNodeDetected);
        }
    }
}

int main(){
    vector<int>storeCombinations[10];
    int visitedNode[10];
    
    int numberOfNodes = 10;
    
    bool firstNodeDetected = false;
    
    for (int i=0;i<numberOfNodes;i++){
        visitedNode[i] = 0;
    }
    
    storeCombinations[0].push_back(1);
    storeCombinations[1].push_back(3);
    storeCombinations[1].push_back(5);
    storeCombinations[5].push_back(6);
    storeCombinations[6].push_back(4);
    storeCombinations[4].push_back(8);
    storeCombinations[6].push_back(7);
    storeCombinations[7].push_back(5);
    storeCombinations[7].push_back(9);
    storeCombinations[9].push_back(2);
    storeCombinations[2].push_back(5);
    storeCombinations[2].push_back(0);
    
    performDFS(storeCombinations,numberOfNodes,visitedNode,firstNodeDetected);
    
}
