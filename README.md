# 42 Push_swap

## Description

Push_swap is a sorting algorithm project at 42, where the goal is to sort a stack of integers in ascending order using two stacks (A and B) and a set of predefined operations.

The project focuses on optimizing the sorting process by using a limited set of operations (swap, push, rotate, and reverse rotate) to move elements between stacks effectively.

## Usage

1. Clone the repository:

```bash
git clone https://github.com/cj4ck/42-push_swap.git
cd 42-push_swap
```

2. Compile the program:
```
make
```
3. Run the program with a list of integers:
```
./push_swap 4 2 9 1 5
```

4. You can use the checker program to validate if the output of the push_swap program correctly sorts the integers:
```bash
./push_swap 4 2 9 1 5 | ./checker 4 2 9 1 5
```
## Rules and Operations
The following operations are available for sorting the stacks:

`sa:` Swap the first two elements in stack A.

`sb:` Swap the first two elements in stack B.

`ss:` Swap the first two elements in both stack A and stack B.

`pa:` Push the top element from stack B to stack A.

`pb:` Push the top element from stack A to stack B.

`ra:` Rotate stack A by moving the top element to the bottom.

`rb:` Rotate stack B by moving the top element to the bottom.

`rr:` Rotate both stack A and stack B simultaneously.

`rra:` Reverse rotate stack A by moving the bottom element to the top.

`rrb:` Reverse rotate stack B by moving the bottom element to the top.

`rrr:` Reverse rotate both stack A and stack B simultaneously.

<img width="680" alt="Screen Shot 2023-07-27 at 4 25 54 PM" src="https://github.com/cj4ck/42-push_swap/assets/75099354/6728a357-6ee9-41e8-9203-c51afdce3ccd">
