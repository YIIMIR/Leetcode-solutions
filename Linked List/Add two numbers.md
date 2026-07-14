# 2. Add Two Numbers

## Problem

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each node contains a single digit.

Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero except the number 0 itself.

---

## Approach

Traverse both linked lists simultaneously.

At each step:

1. Read the current digit from both linked lists.
2. Add the digits along with the carry from the previous addition.
3. Create a new node containing the last digit of the sum (`sum % 10`).
4. Update the carry (`sum / 10`).
5. Move to the next nodes.

Continue until both linked lists are exhausted and there is no remaining carry.

---

## Algorithm

1. Create a dummy node to simplify list construction.
2. Initialize a pointer (`current`) to the dummy node.
3. Initialize `carry = 0`.
4. While either list has remaining nodes or carry is not zero:
   - Read values from both lists (use 0 if a list has ended).
   - Compute the total sum.
   - Create a new node with `sum % 10`.
   - Update carry using `sum / 10`.
   - Move the pointers forward.
5. Return `dummy->next`.

---

## Dry Run

Input:

l1 = 2 → 4 → 3

l2 = 5 → 6 → 4

### Iteration 1

2 + 5 = 7

Result:

7

Carry:

0

---

### Iteration 2

4 + 6 = 10

Result:

7 → 0

Carry:

1

---

### Iteration 3

3 + 4 + 1 = 8

Result:

7 → 0 → 8

Carry:

0

Final Answer:

7 → 0 → 8

---

## Time Complexity

**O(max(m, n))**

where **m** and **n** are the lengths of the two linked lists.

---

## Space Complexity

**O(max(m, n))**

A new linked list is created to store the result.

---

## Concepts Used

- Linked List
- Pointer Traversal
- Carry Propagation
- Dummy Node
- Dynamic Memory Allocation

---

## Key Learning

Using a **dummy node** eliminates special handling for the head of the linked list, making insertion logic much simpler. Carry propagation ensures correct addition when the sum of two digits exceeds 9.