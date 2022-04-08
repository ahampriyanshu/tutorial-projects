---
toc: true
layout: post
comments: true
categories: ["competitive-programming", "C++"]
title: 04. Competitive Programming 
author: Priyanshu Tiwari
description: sorting and searching
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

## Variation 

We say that two integers x and y have a variation of at least K, if |x − y| ≥ K (the absolute value of their difference is at least K). Given a sequence of N integers a1,a2,...,aN and K, the total variation count is the number of pairs of elements in the sequence with variation at least K, i.e. it is the size of the set of pairs


{(i,j)|1≤i< j≤N and|ai−aj|≥K}


For example if K = 1 and the sequence is 3,2,4 the answer is 3. If K = 1 and the sequence is 3, 1, 3 then the answer is 2.


Your task is to write a program that takes a sequence and the value K as input and computes the total variation count.

* [Practice](https://www.codechef.com/ZCOPRAC/problems/ZCO15002)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i=0; i<n; i++)
	    cin >> arr[i];
	    
	  sort(arr, arr+n);
	  int i=0, j = 1, ans = 0;
	  
	  while(j<n){
	      if(arr[j] - arr[i] >= k){
	          ans += (n-j);
	          i++;
	      } else j++;
	  }
	  
	  cout << ans << endl;
	return 0;
}
```

## Count Inversions 

For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 

Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

* [Practice](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)

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