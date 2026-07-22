# 20. Valid Parentheses

## Approach
1. Use a stack to keep track of opening brackets.
2. Traverse each character in the string.
3. If the character is an opening bracket `(`, `{`, or `[`, push it onto the stack.
4. If the character is a closing bracket:
   - If the stack is empty, return `false`.
   - Check whether the top of the stack matches the corresponding opening bracket using a hash map.
   - If it does not match, return `false`.
   - Otherwise, pop the top element from the stack.
5. After processing all characters, the stack should be empty. If it is, the string is valid; otherwise, it is invalid.

---

## Algorithm
1. Create an empty stack of characters.
2. Create a hash map to store matching bracket pairs:
   - `')' → '('`
   - `'}' → '{'`
   - `']' → '['`
3. Iterate through each character in the string:
   - If it is an opening bracket, push it onto the stack.
   - Otherwise:
     - If the stack is empty, return `false`.
     - If the top of the stack does not match the corresponding opening bracket, return `false`.
     - Pop the top element.
4. Return `true` if the stack is empty; otherwise, return `false`.

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
  - Each character is processed exactly once.

- **Space Complexity:** `O(n)`
  - In the worst case, all opening brackets are stored in the stack.

---

## Key Points
- A stack follows the **Last In, First Out (LIFO)** principle, making it ideal for matching nested brackets.
- A hash map is used to quickly find the matching opening bracket for each closing bracket.
- If a closing bracket appears when the stack is empty, the string is invalid.
- After processing the entire string, the stack must be empty for the parentheses to be valid.