# 3Sum

## Problem

Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that:

* `i != j`
* `i != k`
* `j != k`
* `nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

---

## Approach

The solution first sorts the array, allowing the **Two Pointers** technique to be applied efficiently.

For each element in the array:

* Treat it as the first element of a potential triplet.
* Use two pointers to search for the remaining two elements whose sum equals the negative of the fixed element.
* If the current sum is too small, move the left pointer to increase the sum.
* If the current sum is too large, move the right pointer to decrease the sum.
* When a valid triplet is found, store it and skip any duplicate values to ensure only unique triplets are returned.

Since the array is sorted, duplicate elements can be skipped easily, preventing repeated triplets.

---

## Algorithm

1. Sort the input array.
2. Iterate through the array using index `i`.
3. Skip duplicate values for `i`.
4. Initialize two pointers:

   * `left = i + 1`
   * `right = n - 1`
5. While `left < right`:

   * Compute the sum of the three elements.
   * If the sum is less than `0`, move `left` forward.
   * If the sum is greater than `0`, move `right` backward.
   * Otherwise:

     * Store the triplet.
     * Skip duplicate values for both pointers.
     * Move both pointers inward.
6. Return the list of unique triplets.

---

## Complexity Analysis

* **Time Complexity:** `O(n²)`

  * Sorting takes `O(n log n)`, and the two-pointer search runs in `O(n²)` overall.

* **Space Complexity:** `O(1)`

  * Excluding the space required for storing the output.

---

## Key Insight

After sorting the array, the problem reduces to repeatedly solving a **Two Sum** problem.

For each fixed element, the remaining two numbers can be found efficiently using two pointers instead of checking every possible pair. Skipping duplicate values ensures that each valid triplet appears only once in the final answer.
