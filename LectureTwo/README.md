# Lecture Two [Educational]
> C-programming Basics / Integration and Process Concept.

Understanding the structure, working mechaninism, compilation and its stages in C-language. Using main() function to view process layout, memory process layout and how file becomes an executable.

---

## [~] Learning Objective

* The basic structure of C program.
* The main() function and return type.
* Stages of compilation.
* Use of GCC flags.
* Understand distinction between a program and a process
* How OS loads and executes a program?

---

## [1] Lab-Task
> GCC Compilation Structure in C-Programming.

### [?] Reproducing Steps

**Compilation:**

```bash
gcc -E compile.c -o compile.i
gcc -S compile.i -o compile.s
gcc -c compile.s -o compile.o
gcc compile.o -o compile
```

**Reading Machine Code:**

```bash
cat compile.i
cat compile.s
cat compile.o
```

### [?] Project Structure

```
Lab1/
│── compile
│── compile.c
│── compile.i
│── compile.o
│── compile.s
```

---

## [2] Lab-Task
> Investigating Process Lifecycle and OS Interaction.

### [?] Introduction

Putting the OS processes and resources theory into practice by writing code that interacts with the Linux kernel to query its own process identity, control its execution time, and report its success or failure back to the OS shell.

### [?] Objective

Bridging the gap between high-level C code and low-level OS process management using system calls like `getpid()`, `sleep()`, and return codes. This lab also demonstrates that C programs are active processes managed by the Linux kernel.


### [?] Project Structure

```
Lab2/
│── task_1.c
│── task1
│── task_2.c
│── task2
│── task_3.c
|── ...
```

---