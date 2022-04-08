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
class Solution{
  public:
  
    long long merge(long long arr[], long long start, long long mid, long long end) {

    long long inversions = 0, i = start, j = mid, k = 0;
	long long temp[end - start + 1];

	while(i < mid && j <= end){ 
		if(arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else {
			temp[k++] = arr[j++];
			inversions += mid - i;
		}
	}

	while(i < mid) 
		temp[k++] = arr[i++];

	while(j <= end) 
		temp[k++] = arr[j++];

	for(i = start; i <= end; i++)
		arr[i] = temp[i - start];
		
	return inversions;
}

    
    long long merge_sort(long long A[], long long left, long long right){
        
        if(left >= right) return 0;

        long long mid = left + (right-left)/2;
        return merge_sort(A, left, mid) + merge_sort(A, mid+1, right) +  merge(A, left, mid+1, right);
    }
    
    long long int inversionCount(long long A[], long long N)
    {
        return merge_sort(A, 0, N-1);
    }

};
```


## Chef Restaurant 

Chef is a cook and he has recently opened a restaurant.

The restaurant is open during N time intervals [L1,R1),[L2,R2),…,[LN,RN). No two of these intervals overlap — formally, for each valid i, j such that i≠j, either Ri < Lj or Rj < Li.

M people (numbered 1 through M) are planning to eat at the restaurant; let's denote the time when the i-th person arrives by Pi. If the restaurant is open at that time, this person does not have to wait, but if it is closed, this person will wait until it is open. Note that if this person arrives at an exact time when the restaurant is closing, they have to wait for the next opening time.

For each person, calculate how long they have to wait (possibly 0 time), or determine that they will wait forever for the restaurant to open.

* [Practice](https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559)

```cpp
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
    	int t;
    	cin >> t;
    	while(t--){
    	    int n, m;
    	    cin >> n >> m;
    	    vector<pair<int, int>> intervals;
    	    
    	    for (int i =0; i<n; i++) {
    	        int start, end;
    	        cin >> start >> end;
    	        intervals.push_back(make_pair(start, end));
    	    }
    	    
    	    sort(intervals.begin(), intervals.end());
    	    
    	    while(m--){
    	        int curr;
    	        cin >> curr;
    	        int pos = lower_bound(intervals.begin(), intervals.end(), make_pair(curr, 0)) - intervals.begin();
    	        if(pos == 0) cout << intervals[0].first - curr << endl;
    	        else {
    	            int ans = -1;
    	            if(intervals[pos-1].second > curr) ans = 0;
    	            else if (pos < intervals.size()){
    	               ans = intervals[pos].first - curr;
    	            }
    	            cout << ans << endl;
    	        }
    	    }
    	}
    	return 0;
    }
```