# LeetCode 12: Integer to Roman

## Problem
Convert an integer in the range [1, 3999] to its Roman numeral representation.

## My Approach

Instead of using a lookup table of Roman symbols and values, I build the Roman numeral by repeatedly appending symbols from largest to smallest.

After each stage, I replace invalid repeated patterns with their correct subtractive notation, took me alot of debugging cause im dumb. skill issue u dmb fk lolol 🤣 

Examples:

- IIII  -> IV
- VIIII -> IX
- XXXX  -> XL
- LXXXX -> XC
- CCCC  -> CD
- DCCCC -> CM

This approach relies entirely on string manipulation using(i didnt knew any other functions or concepts at this point, i still dont cause i am at this point 😗):

- `substr()`
- `erase()`
- `+=`

No arrays, vectors, maps, or lookup tables are used.

## Time Complexity

O(1)

The maximum input is 3999, so the number of iterations is bounded by a constant.

## Space Complexity

O(1)

Only the output string is used.

## What I Learned

- String manipulation using `substr()` and `erase()`
- Detecting and replacing patterns inside strings
- Constructing a solution without using lookup tables
- Roman numeral subtraction rules
- And my head hurts