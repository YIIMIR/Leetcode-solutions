# 18. 4Sum

## Approach
1. Sort the array.
2. Fix the first element using index `i`.
3. Fix the second element using index `j`.
4. Use two pointers:
   - `k = j + 1`
   - `l = n - 1`
5. Calculate the sum of the four elements.
   - If the sum equals the target, store the quadruplet.
   - Skip duplicate values for `k` and `l`.
   - Move both pointers.
   - If the sum is smaller than the target, increment `k`.
   - Otherwise, decrement `l`.
6. Skip duplicate values for `i` and `j` to avoid repeated quadruplets.

---

## Algorithm
1. Sort the input array.
2. Iterate `i` from `0` to `n - 4`.
   - Skip duplicate values of `i`.
3. Iterate `j` from `i + 1` to `n - 3`.
   - Skip duplicate values of `j`.
4. Initialize:
   - `k = j + 1`
   - `l = n - 1`
5. While `k < l`:
   - Compute the sum using `long long` to avoid integer overflow.
   - If the sum equals the target:
     - Store the quadruplet.
     - Skip duplicate values for `k` and `l`.
     - Increment `k` and decrement `l`.
   - Else if the sum is less than the target:
     - Increment `k`.
   - Else:
     - Decrement `l`.
6. Return the list of quadruplets.


---

## Complexity Analysis

- **Time Complexity:** `O(n³)`
  - Sorting takes `O(n log n)`.
  - Two nested loops contribute `O(n²)`.
  - Two-pointer traversal takes `O(n)` for each `(i, j)` pair.
  - Overall: `O(n³)`.

- **Space Complexity:** `O(1)`
  - Excluding the output vector.
  - Only a few variables are used.

---

## Key Points
- Sort the array before applying the two-pointer technique.
- Skip duplicates for `i`, `j`, `k`, and `l` to avoid repeated quadruplets.
- Use `long long` while computing the sum to prevent integer overflow.
- The two-pointer approach reduces the brute-force complexity from `O(n⁴)` to `O(n³)`.