#ifndef DFS_SOLVER_H
#define DFS_SOLVER_H

#include <time.h>

class dfs_solver
{
public:
    dfs_solver(int start[3][3],int x , int y);
    void Solve();
    clock_t get_time();

private:
    int initial[3][3];
    int final[3][3];
    int x;
    int y;
    clock_t start;
    clock_t finish;
    clock_t delay;
};

#endif // DFS_SOLVER_H
