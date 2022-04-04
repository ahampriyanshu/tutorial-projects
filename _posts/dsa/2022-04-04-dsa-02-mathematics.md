---
toc: true
layout: post
comments: true
categories: ["Data Structures", "C++"]
title: Mathematics
author: Priyanshu Tiwari 
description: Session II | Data Structures | C++
---

## Number of digits in an integer

### Iterative

```cpp
count(n){
    int cnt = 0;
    while(n){
        cnt += n%10;
        n /= 10;
    }

    return cnt;
}
```

### Recursive

```cpp
count(n){
    if(!n) return n;
    return 1+count(n)l
}
```

### Logarithmic

```cpp
count(n){
    return floor(log(n) + 1);
}
```

## Number sequences

### Arithmetic progression

> 2, 4, 6, 8, ......

a<sub>1</sub> = a + 0.d
a<sub>2</sub> = a + 1.d
a<sub>3</sub> = a + 2.d
.
.
.
a<sub>n</sub> = a + (n-1).d

We know that

$\rightarrow$ avg = sum/n

$\rightarrow$ sum = avg*n

In case of evenly distributed numbers

$\rightarrow$ $avg = \frac{sum}{n}$

$\rightarrow$ $sum = \frac{(a + a + (n-1).d)n}{2}$

$\rightarrow$ $sum = \frac{n(2a + (n-1)*d)}{2}$

### Geometric progression

> 2, 4, 16, 32, 64 ......

> a, $a.r^{1}$,  $a.r^{2}$, $a.r^{3}$, ... $r^{n-1}$

1. Nth term $\rightarrow$

$a_{n} = a*r^{n-1}$

1. Sum till N terms $\rightarrow$

$S_{n} = a*(r^{n} - 1)/ r-1$

1. Sum of infinite terms $\rightarrow$

This works only if $|r|<1$

$S_{\infty} = \frac{a}{1-r}$

### Quadratic formula

1.Roots of quad eq. 

$x=\frac{-b\pm\sqrt{b^2-4ac}}{2a}$.

1. $D = b^{2} - 4ac$

- D < 0 : Imaginary roots
- D = 0 : Two equal roots
- D > 0 : Two distinct roots

### Prime numbers

* 2,3,5,7,11, .... 
* All the numbers having exactly two factors.
* Can be represented as **6n+1** or **6n-1**, except 2 and 3.
* 2 and 3 are only consecutive prime numbers.