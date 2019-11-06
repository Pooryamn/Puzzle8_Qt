#include "bfs_solver.h"

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
