#include "bfs_t.h"
#include <bits/stdc++.h>
#include <QString>
#include <fstream>
#include <QMessageBox>
#include <QQueue>

using namespace std;

// ===========
// public vars :
// ===========

int row_bfs[] = { 1, 0, -1, 0 };
int col_bfs[] = { 0, -1, 0, 1 };


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

Node *newNode(int mat[3][3],int x , int y, int newX, int newY, int level,Node* parent); // Create new node and set it.
void memcpy(int distination[3][3],int source[3][3]); // copy matrix data to another
void swap(int *distination , int* source);
int calculateCost(int initial[3][3], int final[3][3]); // cost of step
int isSafe(int x, int y); // check if (x, y) is a valid matrix cordinate
void print_path(Node* root); // print path
void print_node(int mat[3][3]);



bfs_t::bfs_t(int start[3][3],int ix , int iy)
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


void bfs_t::Solve(){

    // begin timer
    start = clock();

    // Create a Queue to store nodes of search tree :
   // priority_queue<Node*,std::vector<Node*>,comp> pq;
    QQueue<Node*> pq;

    // Create root :
    Node* root = newNode(initial,x,y,x,y,0,NULL);

    root->cost = calculateCost(initial,final);

    // add root to queue
    pq.enqueue(root);

    // main work in BFS Search :
    while(!pq.empty()){
        Node* min = pq.head(); // smallest cost

        pq.dequeue(); // node with smallest cost deleted

        if(min->cost == 0 ){ // if min is answer
            // print the path !!!!!!!!!!!!!
            print_path(min);
            return;
        }

        for (int i =0;i<4;i++) { // each node can have 4 children (maximum)

            if(isSafe(min->x + row_bfs[i],min->y + col_bfs[i])){

                // create child and calc its cost
                Node* child = newNode(min->mat,min->x,min->y,min->x + row_bfs[i],min->y+col_bfs[i],min->level+1,min);

                child->cost = calculateCost(child->mat,final); // calc cost

                //add child to queue
                pq.enqueue(child);

                // limitation :
                if(pq.size() > 30000000){ // was 15000000
                    QMessageBox::warning(0,"Internal Error","this problem can't solved");
                    remove("nodes.dat");
                    return;
                }
            }
        }
    }
    //finish the timer
    finish = clock();

    delay = finish - start;

}

clock_t bfs_t::get_time(){
    return delay;
}
