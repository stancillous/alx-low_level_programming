### C - RECUSION

Recursion is a powerful programming technique in which a function calls itself. In C, recursion can be used to solve complex problems that can be broken down into simpler subproblems. Recursion is particularly useful when dealing with data structures such as trees and graphs, where each node or vertex may have multiple sub-nodes or sub-vertices.
<br>

The basic idea of recursion is to have a function call itself with a smaller or simpler argument, until the argument reaches a base case that can be directly computed without further recursion. The result of the function is then computed by combining the results of the recursive calls.
<br>

For example, consider the factorial function, which computes the factorial of a given integer:<br>

```
int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}
```
