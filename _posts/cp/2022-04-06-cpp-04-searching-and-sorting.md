---
toc: true
layout: post
comments: true
categories: ["competitive-programming", "C++"]
title: Sorting And Searching 
author: Priyanshu Tiwari
description: Session IV | Competitive Programming | C++
---

## Aggressive Cows

Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.

* [Practice](https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559)

```cpp
bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int lastPosition = stalls[0];
    for(int i =0; i<stalls.size();i++){
        if(stalls[i]-lastPosition >= mid){
            cowCount++;
            if(cowCount==k)
                return true;
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    
    int start = 0;
    int maxi=-1;
    for(int i =0; i<stalls.size(); i++){
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid  = start+(end-start)/2;
    
    while(start<=end){
        if(isPossible(stalls,k,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
```