# Monty ByteCode Interpreter

## Introduction

This project aims to create an interpreter for Monty ByteCode files. The Monty ByteCode language allows the manipulation of a stack data structure through a set of operations defined by opcodes.

## Project Structure

### Task 0: push, pall

#### push
- The `push` opcode pushes an element onto the stack.
    - Usage: `push <int>`
    - If `<int>` is not an integer or not provided, an error is displayed.
    - Overflow handling is not required; use the `atoi` function.

#### pall
- The `pall` opcode prints all values on the stack.
    - Usage: `pall`
    - If the stack is empty, nothing is printed.

### Task 1: pint

#### pint
- The `pint` opcode prints the value at the top of the stack.
    - Usage: `pint`
    - Error handling for an empty stack.

### Task 2: pop

#### pop
- The `pop` opcode removes the top element of the stack.
    - Usage: `pop`
    - Error handling for an empty stack.

### Task 3: swap

#### swap
- The `swap` opcode swaps the top two elements of the stack.
    - Usage: `swap`
    - Error handling for a stack with less than two elements.

### Task 4: add

#### add
- The `add` opcode adds the top two elements of the stack.
    - Usage: `add`
    - Error handling for a stack with less than two elements.

### Task 5: nop

#### nop
- The `nop` opcode does nothing.
    - Usage: `nop`

### Task 6: sub

#### sub
- The `sub` opcode subtracts the top element from the second top element.
    - Usage: `sub`
    - Error handling for a stack with less than two elements.

### Task 7: div

#### div
- The `div` opcode divides the second top element by the top element.
    - Usage: `div`
    - Error handling for a stack with less than two elements.
    - Division by zero is handled.

### Task 8: mul

#### mul
- The `mul` opcode multiplies the second top element by the top element.
    - Usage: `mul`
    - Error handling for a stack with less than two elements.

### Task 9: mod

#### mod
- The `mod` opcode calculates the remainder of the division of the second top element by the top element.
    - Usage: `mod`
    - Error handling for a stack with less than two elements.
    - Division by zero is handled.

### Task 10: comments

- Lines starting with `#` are treated as comments and ignored.

### Task 11: pchar

#### pchar
- The `pchar` opcode prints the character at the top of the stack.
    - Usage: `pchar`
    - ASCII value of the top stack element is used.
    - Error handling for an empty stack and out-of-range ASCII values.

### Task 12: pstr

#### pstr
- The `pstr` opcode prints the string starting at the top of the stack.
    - Usage: `pstr`
    - ASCII values in the stack are used to form the string.
    - Stops printing when encountering 0, reaching the end of the stack, or encountering an out-of-range ASCII value.

### Task 13: rotl

#### rotl
- The `rotl` opcode rotates the stack to the top.
    - Usage: `rotl`

### Task 14: rotr

#### rotr
- The `rotr` opcode rotates the stack to the bottom.
    - Usage: `rotr`

### Task 15: stack, queue

#### stack, queue
- The `stack` opcode sets the data format to a stack (LIFO) [Default].
    - Usage: `stack`
- The `queue` opcode sets the data format to a queue (FIFO).
    - Usage: `queue`
- Switching modes rearranges the stack or queue accordingly.

### Task 16: Brainf*ck

- A Brainf*ck script that prints "School" followed by a new line is provided in the `bf` subdirectory.

### Task 17: Add two digits

- Reads two digits from stdin, adds them, and prints the result.

### Task 18: Multiplication

- Reads two digits from stdin, multiplies them, and prints the result.

### Task 19: Multiplication level up

- Reads two digits from stdin, multiplies them, and prints the result followed by a new line.

## Usage

1. Compile the interpreter: `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`
2. Run a Monty ByteCode file: `./monty file.m`

## Dependencies

- Brainf*ck interpreter: Install with `sudo apt-get install bf`

## Author

ZAKARI MATTHEW

## Acknowledgments
This project is part of the ALX AFRICA software engineering curriculum.
