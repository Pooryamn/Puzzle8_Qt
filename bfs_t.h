#ifndef BFS_T_H
#define BFS_T_H

#include <time.h>

class bfs_t
{
public:
    bfs_t(int start[3][3],int x , int y);
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

#endif // BFS_T_H
