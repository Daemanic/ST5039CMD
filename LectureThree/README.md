# Lecture Three [Educational]
> Data Types and OS Memory Management

Understanding how the primitive data types in C map onto real memory, and how the operating system gives every running process its own virtual address space, divided into segments with different purposes.

---

## [~] Learning Objectives

* The primary data types in C (char, int, long, float, double, pointers) and how their sizes are measured with `sizeof()` function.
* Why data type sizes vary across system architectues (e.g. 32-bit and 64-bit), and how that affects memory allocation.
* The five segments of a process's memory layout and what each is for: `text`, `data`, `bss`, `heap`, `stack`.
* The difference between a variable's value and its address, and how addresses reveal which segment a variable lives in.
* Importance of Process Memory Layout works (isolation → protection → efficienty).

---

## [~] Labs in This Lecture

| Lab | Focus |
|---|---|
| [Lab1](./Lab1) | A practical approach to understanding system internals. |