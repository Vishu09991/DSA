/*
🔁 Recursion in Programming — What it is & How it Works
📌 What is Recursion?

Recursion is a programming technique where a function calls itself to solve a problem by breaking it into smaller subproblems of the same type.

A recursive solution always has:

Base Case – stops the recursion

Recursive Case – calls the function again with a smaller input

✨ Example 1: Factorial (Classic Example)

🧠 How Recursion Works Internally (Call Stack)

Every recursive call:

Is stored in the call stack

Waits until its child call finishes

Then resumes execution  

⚠️ Important Rules of Recursion

✔ Must have a base case
✔ Recursive calls must move toward base case
✔ Stack memory is used (risk of stack overflow)

🆚 Recursion vs Iteration
Recursion	Iteration
Uses function calls	Uses loops
Cleaner for tree/graph problems	Faster for simple loops
Uses stack memory	Uses less memory
Easier logic (sometimes)	More efficient
🎯 Where Recursion is Commonly Used

Tree & Graph Traversals (DFS)

Divide & Conquer (Merge Sort, Quick Sort)

Backtracking (N-Queens, Sudoku)

Dynamic Programming (with memoization)

🚀 When to Use Recursion (Exam / Interview Tip)

Use recursion when:

Problem is naturally recursive

Subproblem structure is clear

Readability > performance

Avoid recursion when:

Deep recursion can cause stack overflow

Simple loop can do the job
*/