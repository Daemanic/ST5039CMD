# Lecture Two [Educational]
> C-Programming Basics / Compilation and Process Concepts

Understanding the structure and working mechanism of a C program, how it moves from source code to a running process and including the stages of compilation and how the operating system loads and manages that process once it's executing.

---

## [~] Learning Objectives

* The basic structure of a C program.
* The `main()` function and its return type.
* The four stages of GCC compilation (preprocessing → compilation → assembly → linking).
* Use of `GCC` flags to stop at and inspect each stage.
* The distinction between a **program** (static file on disk) and a **process** (program in execution).
* How the OS loads and executes a program, and assigns it a PID/PPID.
* How system calls (`getpid()`, `getppid()`, `sleep()`) let a C program interact directly with the kernel.
* How a process communicates success/failure back to the shell via its **exit code**.

---

## [~] Labs in This Lecture

| Lab | Focus |
|---|---|
| [Lab1](./Lab1) | Compiling a C file manually through each GCC stage, and inspecting the output at every step. |
| [Lab2](./Lab2) | Writing programs that query their own PID/PPID, sleep, read input, and return different exit codes — observing them as live OS processes. |