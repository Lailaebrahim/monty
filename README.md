# monty

Repo for Monty Program ALX project

## Overview

Monty is a simple interpreter for Monty ByteCodes files, a scripting language designed for stack-based operations. The interpreter reads Monty bytecode files line by line and executes the specified opcodes, using a stack (LIFO) or queue (FIFO) data structure. This project was completed as part of the ALX Software Engineering program.

## Features

- Supports fundamental stack operations: push, pop, pall, pint, swap, add, sub, div, mul, mod
- Implements queue mode (FIFO) and stack mode (LIFO) switching
- Handles arithmetic operations on stack elements
- Prints elements of the stack or queue
- Supports comments and blank lines in bytecode files
- Provides error handling for unknown instructions, usage errors, and file I/O

## Usage

### Compiling

To compile the Monty interpreter, use:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

### Running

To execute a Monty bytecode file:

```sh
./monty <file.m>
```

### Example Bytecode File

```
# This is a comment
push 1
push 2
push 3
pall
pop
pall
```

## Supported Opcodes

| Opcode    | Description                                   |
|-----------|-----------------------------------------------|
| push      | Pushes an integer onto the stack or queue     |
| pall      | Prints all values on the stack or queue       |
| pint      | Prints the value at the top                   |
| pop       | Removes the top element                       |
| swap      | Swaps the top two elements                    |
| add       | Adds the top two elements                     |
| sub       | Subtracts the top element from the second     |
| div       | Divides the second element by the top         |
| mul       | Multiplies the top two elements               |
| mod       | Computes the rest of the division             |
| queue     | Switches to queue mode (FIFO)                 |
| stack     | Switches to stack mode (LIFO)                 |
| nop       | Does nothing                                  |

See the project files for more supported opcodes and details.

## Project Structure

```
monty/
├── main.c
├── monty.h
├── stack.c
├── queue.c
├── opcodes.c
├── file.c
├── utils.c
├── README.md
├── bytecodes/        # Example Monty bytecode files
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
