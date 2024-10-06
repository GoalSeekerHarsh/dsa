#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &boards, int n, int k, int mid) {
    int painterCount = 1;
    int boardcount = 0;

    for(int i = 0; i < n; i++)
    {
        if(boardcount + boards[i] <= mid)
        {
            boardcount += boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || boards[i] > mid)
            {
                return false;
            }
            boardcount = boards[i]; //ensures that when a new painter is assigned board, they start with the count of the current board (boards[i]).
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{

    // Initialize the binary search range
    int s = 0;
    int boardsum = 0;
    int n= boards.size();
    
    for(int i = 0; i < n; i++)
    {
        boardsum += boards[i];  // Total boardsum of all board
    }
    
    int e = boardsum;  // End point: boardsum of all board
    int ans = -1;
    int mid = s + (e - s) / 2;
    
    // Binary search to find the minimum number of board
    while(s <= e)
    {
        if(isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;  // Try for a smaller value
        }
        else
        {
            s = mid + 1;  // Try for a larger value
        }
        mid = s + (e - s) / 2;
    }
    
    return ans;
}

