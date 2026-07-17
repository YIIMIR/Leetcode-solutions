# Container With Most Water

## Problem

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `iᵗʰ` line are `(i, 0)` and `(i, height[i])`.

Find two lines that, together with the x-axis, form a container capable of holding the maximum amount of water.

Return the maximum amount of water the container can store.

---

## Approach

The solution uses the **Two Pointers** technique.

* Place one pointer at the beginning of the array and the other at the end.
* Calculate the area formed by the two lines.
* Update the maximum area if the current area is larger.
* Move the pointer pointing to the shorter line inward, since the shorter line limits the container's height. Moving the taller line cannot increase the area while the width decreases.
* Repeat until both pointers meet.

This approach avoids checking every possible pair of lines and efficiently finds the maximum area.

---

## Algorithm

1. Initialize two pointers:

   * `left = 0`
   * `right = n - 1`
2. Initialize `maxArea = 0`.
3. While `left < right`:

   * Calculate the width between the pointers.
   * Compute the current area using:

     * `width × min(height[left], height[right])`
   * Update `maxArea` if the current area is larger.
   * Move the pointer with the smaller height inward.
4. Return `maxArea`.

---

## Complexity Analysis

* **Time Complexity:** `O(n)`

  * Each pointer moves at most `n` times.

* **Space Complexity:** `O(1)`

  * Only a few extra variables are used.

---

## Key Insight

The height of the container is always determined by the **shorter** of the two lines.

Since moving the taller line only decreases the width without increasing the height, it can never produce a better result. Therefore, the optimal strategy is to move the pointer at the shorter line and continue searching for a taller boundary.
