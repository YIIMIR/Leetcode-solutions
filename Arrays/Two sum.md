# 1. Two Sum

## Problem

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to the target.

You may assume that each input has exactly one solution, and you may not use the same element twice.

The answer can be returned in any order.

---

## Approach

Use a hash map (`unordered_map`) to store each number along with its index as we iterate through the array.

For every element:

1. Calculate the complement (`target - current number`).
2. Check if the complement already exists in the hash map.
3. If it exists, return the index of the complement and the current index.
4. Otherwise, store the current number and its index in the hash map.

This allows us to find the answer in a single traversal.

---

## Algorithm

1. Create an empty hash map.
2. Traverse the array.
3. Compute the complement:
   ```
   complement = target - nums[i]
   ```
4. If the complement exists in the hash map:
   - Return the stored index and the current index.
5. Otherwise:
   - Store the current number and its index.
6. If no pair is found, return an empty vector.

---

## Dry Run

**Input**

```
nums = [2, 7, 11, 15]
target = 9
```

### Iteration 1

Current Number = 2

Complement = 7

Hash Map:

```
{2 : 0}
```

---

### Iteration 2

Current Number = 7

Complement = 2

Hash Map already contains `2`.

Return:

```
[0, 1]
```

---

## Time Complexity

**O(n)**

Each element is visited once, and hash map operations take average **O(1)** time.

---

## Space Complexity

**O(n)**

The hash map may store all elements in the worst case.

---

## Concepts Used

- Arrays
- Hash Map (`unordered_map`)
- One-pass Traversal
- Constant Time Lookup

---

## Key Learning

Using a hash map avoids the need for nested loops. Instead of checking every pair, we remember previously seen numbers and immediately determine whether the current element completes the required sum. This reduces the time complexity from **O(n²)** to **O(n)**.