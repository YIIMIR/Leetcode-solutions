# Roman to Integer

## Problem

Given a Roman numeral, convert it to an integer.

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|--------|------:|
| I | 1 |
| V | 5 |
| X | 10 |
| L | 50 |
| C | 100 |
| D | 500 |
| M | 1000 |

Normally, symbols are added together. However, when a smaller numeral appears before a larger one, it is subtracted instead.

### Examples

**Example 1**

```text
Input: "III"
Output: 3
```

**Example 2**

```text
Input: "LVIII"
Output: 58
```

**Example 3**

```text
Input: "MCMXCIV"
Output: 1994
```

---

## Approach

A helper function `value()` converts each Roman numeral into its corresponding integer.

The string is traversed from left to right.

For every character:

- If the current symbol has a smaller value than the next symbol, subtract its value from the answer.
- Otherwise, add its value.

This works because Roman numerals use subtractive notation only when a smaller numeral precedes a larger one (such as `IV` or `IX`).

---

## Algorithm

1. Create a function to return the integer value of each Roman numeral.
2. Initialize `sum = 0`.
3. Traverse the string from left to right.
4. Compare the value of the current character with the next character.
5. If the current value is smaller, subtract it.
6. Otherwise, add it.
7. Return the final sum.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each character is processed exactly once.

- **Space Complexity:** `O(1)`
  - Only a few variables are used.


---

## Key Idea

The entire solution depends on one observation:

- **Smaller value before larger value → Subtract**
- **Otherwise → Add**

Examples:

- `IV = -1 + 5 = 4`
- `IX = -1 + 10 = 9`
- `XL = -10 + 50 = 40`
- `CM = -100 + 1000 = 900`

Every Roman numeral can be evaluated using this single rule.