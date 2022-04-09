---
toc: true
layout: post
comments: true
categories: ["competitive-programming", "C++"]
title: 05. Competitive Programming 
author: Priyanshu Tiwari
description: Basics of recursions, PMI, power(x,n), count digits of a number
---

## Recursion

When a func calls itself.

Can cause **segmentation fault**, if base case is implemented poorly.

Based on **PMI**(Principle of Mathematical Induction).

## Pow(x, n)

Implement pow(x, n), which calculates x raised to the power n (i.e., x<sup>n</sup>).

```cpp
double myPow(double x, int n) {
        if(n==0) return 1.0;
        double y = myPow(x, n/2);
        
        if(n % 2 == 0)
            return y*y;
        else return n < 0 ? (y*y)/x : x*y*y; 
}
```

## Print N numbers

You are given an integer N. Print numbers from 1 to N without the help of loops.

```cpp
void printTillN(int N, int i = 1)
{
    cout << i << " ";

    if(i == N)
        return;
    return printTillN(N, i+1);
}
```

## Count digits in an integer

Count the number of digits in a long integer entered by a user.

```cpp
int countDigit(long long n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}
```