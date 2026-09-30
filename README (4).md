# Bracket Checker (Java)

## Aim
To check whether the brackets `()`, `[]` and `{}` in a given string are balanced. The program should use a stack to do this.

## Prerequisites
- JDK (Java Development Kit) installed
- Stack concept (LIFO)
- `Deque` / `ArrayDeque` in Java
- Strings, `char` arrays and loops
- Command-line arguments (`main(String[] args)`)

## Procedure
The program scans the string character by character and pushes every opening bracket onto a stack. For each closing bracket it pops the stack and compares the pair; the string is balanced only if the stack is empty at the end.

## Build & run
```bash
javac BracketChecker.java
java BracketChecker                      # runs built-in examples
java BracketChecker "{[()]}" "((]"       # test your own strings
```

## Conclusion
The stack gives a simple and correct way to match nested brackets. The program handles wrong order, missing brackets and extra brackets. This same logic is used in compilers and code editors for syntax checking.
