# Reverse Integer (LeetCode 7)

## Problem

Given a signed 32-bit integer `x`, reverse its digits.

If reversing the integer causes it to go outside the 32-bit signed integer range, return `0`.

---

## My Approach

The idea is simple.

I repeatedly take the last digit of the number and append it to a new integer.

For example, if the number is `123`:

- Take `3` → reversed becomes `3`
- Take `2` → reversed becomes `32`
- Take `1` → reversed becomes `321`

This continues until there are no digits left.

Since the reversed number can become larger than a 32-bit integer, I store it in a `long long`. Once the reversal is complete, I check whether the value lies within the valid integer range. If it doesn't, I return `0`.

---

## Dry Run

Input:

```
123
```

Iteration 1

```
digit = 3
reverse = 3
remaining = 12
```

Iteration 2

```
digit = 2
reverse = 32
remaining = 1
```

Iteration 3

```
digit = 1
reverse = 321
remaining = 0
```

Final Answer

```
321
```

---

## Overflow Example

Input

```
1534236469
```

Reversed value becomes

```
9646324351
```

This is greater than the maximum value of a signed 32-bit integer (`2147483647`), so according to the problem statement, the answer should be:

```
0
```


---

## Complexity

**Time Complexity:** `O(log n)`

Each digit is processed exactly once.

**Space Complexity:** `O(1)`

Only a few extra variables are used.

---

## What I Learned

The logic for reversing an integer is straightforward. The real challenge is handling overflow.

Initially, I thought using `long long` would solve the problem, but I realized that the function must still return an `int`. If the reversed number exceeds the 32-bit integer range, the correct answer is not the reversed value but `0`. This problem reinforced the importance of reading problem constraints carefully, since they often define the trickiest part of the solution.