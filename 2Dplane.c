#include <bits/stdc++.h>
using namespace std;
int maxPointOnSameLine(vector< pair<int, int> > points)
{
    int N = points.size();
    if (N < 2)
        return N;
 int maxPoint = 0;
    int curMax, overlapPoints, verticalPoints;
  unordered_map<pair<int, int>, int> slopeMap;
    for (int i = 0; i < N; i++)
    {
        curMax = overlapPoints = verticalPoints = 0;
        for (int j = i + 1; j < N; j++)
        {
            if (points[i] == points[j])
                overlapPoints++;
            else if (points[i].first == points[j].first)
                verticalPoints++;
 else
            {
                int yDif = points[j].second - points[i].second;
                int xDif = points[j].first - points[i].first;
                int g = __gcd(xDif, yDif);
                yDif /= g;
                xDif /= 
                slopeMap[make_pair(yDif, xDif)]++;
                curMax = max(curMax, slopeMap[make_pair(yDif, xDif)]);
            }
 
            curMax = max(curMax, verticalPoints);
        }
        maxPoint = max(maxPoint, curMax + overlapPoints + 1);
        slopeMap.clear();
    }
 
    return maxPoint;
}
