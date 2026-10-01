# Lecture Two [Educational]
> C-programming Basics / Integration and Process Concept.

Understanding the structure, working mechaninism, compilation and its stages in C-language. Using main() function to view process layout, memory process layout and how file becomes an executable.

---

## [?] Learning Objective

* The basic structure of C program.
* The main() function and return type.
* Stages of compilation.
* Use of GCC flags.
* Understand distinction between a program and a process
* How OS loads and executes a program?

---

## [1] Lab-Task
> GCC Compilation Structure in C-Programming.

### Reproducing Steps
**Compilation:**

```bash
gcc -E compile.c -o compile.i
gcc -S compile.i -o compile.s
gcc -c compile.s -o compile.o
gcc compile.o -o compile
```

**Reading File:**
```bash
cat compile.c
cat compile.i
cat compile.s
```

### Project Structure

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