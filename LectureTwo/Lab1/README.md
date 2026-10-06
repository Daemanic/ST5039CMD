# [1] Lab-Task
> GCC Compilation Structure in C-Programming.

## [?] Reproducing Steps

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

## [?] Project Structure

```
Lab1/
│── compile
│── compile.c
│── compile.i
│── compile.o
│── compile.s
```