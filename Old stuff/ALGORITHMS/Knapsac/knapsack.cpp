/* Problem: Take as Much Gold as Possible
Problem Introduction
This problem is about implementing an algorithm for the knapsack without repetitions problem.
Problem Description
Task. In this problem, you are given a set of bars of gold and your goal is to take as much gold as possible into your bag. There is just one copy of each bar and for each bar you can either take it or not (hence you cannot take a fraction of a bar).
Input Format. The first line of the input contains the capacity W of a knapsack and the number n of bars of gold. The next line contains n integers w0 , w1 , . . . , wn−1 defining the weights of the bars of gold.
Constraints. 1 ≤ W ≤ 104; 1 ≤ n ≤ 300; 0 ≤ w0,...,wn−1 ≤ 105.
Output Format. Output the maximum weight of gold that fits into a knapsack of capacity W .*/

//
//  knapsac_no_repeat
//
//  Created by Jaymin Jasoliya on 9/2/17.
//  Copyright © 2017 Jaymin Jasoliya. All rights reserved.
//

#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
  //write your code here
  int current_weight = 0;
  for (size_t i = 0; i < w.size(); ++i) {
    if (current_weight + w[i] <= W) {
      current_weight += w[i];
    }
  }
  return current_weight;
}

int knapsac_no_repeat(int W, const vector<int> &w)
{
    //initialize the variables if the there are zero items or the total weight is zero for the knapsac --> value is zero.
    vector<vector<int>> value(w.size()+1,vector<int> (W+1,0));
    
    for(int num_items=0;num_items<w.size();num_items++)
    {
        value[num_items][0] = 0;
    }
    for(int total_weight=0;total_weight<W;total_weight++)
    {
        value[0][total_weight] = 0;
    }
    
    for(int num_items=1;num_items<=w.size();num_items++)
    {
        for(int total_weight=1;total_weight<=W;total_weight++)
        {
            value[num_items][total_weight] = value[num_items-1][total_weight];
            if(w[num_items-1]<= total_weight)
            {
                int Total_Val = value[num_items-1][total_weight-w[num_items-1]] + w[num_items-1];
                if( Total_Val > value[num_items][total_weight])
                {
                    value[num_items][total_weight] = Total_Val;
                }
            }
        }
    }
    return value[w.size()][W];
}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  //std::cout << optimal_weight(W, w) << '\n';
    std::cout << knapsac_no_repeat(W, w) << std::endl;
    
}
