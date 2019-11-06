#include "bfs_solver.h"
#include <bits/stdc++.h>

using namespace std;


// ===========
// structures :
// ===========

struct Node{
    Node *parent; // stores parent node for finding answer path

    int mat[3][3]; // stores data in this node.

    // Zero position :
    int x;
    int y;

    int cost; // number of misplaced blocks

    int level; // number of moves to now

};

// Comparison object for heap
struct comp
{
    bool operator()(const Node* lhs, const Node* rhs) const
    {
        return (lhs->cost + lhs->level) > (rhs->cost + rhs->level);
    }
};


// ===========
// functions :
// ===========

Node *newNode(int mat[3][3],int x , int y, int newX, int newY, int level,Node* parent);



BFS_Solver::BFS_Solver(int start[3][3],int ix , int iy)
{
    // X , Y is initial 0 position :
    x = ix;
    y = iy;

    // start State :
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            initial[i][j] = start[i][j];
        }
    }

    // final State :
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            final[i][j] = i*3 + j + 1;
        }
    }
    final[2][2] = 0 ;
}

void BFS_Solver::Solve(){

    // Create a Queue to store nodes of search tree :
    priority_queue<Node*,std::vector<Node*>,comp> pq;

    // Create root :

}



