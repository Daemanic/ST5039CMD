# [1] Lab Task
> GCC Compilation Structure in C-Programming

## [~] Objective

Demonstration on how data type sizes vary across different system architecutes — directly impacting OS memory allocation, a virtual view of memory divided into segments (operating systems create a process address space) and differentiating between `stack` addresses, `heap` addresses and `data/bss` addresses.

---

## [?] Compilation

```bash
gcc allocation.c -o allocation
./allocation
gcc bytesize.c -o bytesize
./bytesize
gcc variable_addr.c -o address
./address
```

---

## [~] Project Structure

```
Lab1/
│── allocation.c        ← pointer and memory allocation
│── bytesize.c          ← observing data type sizes
│── variable_addr.c     ← observing variable addresses
└── README.md
```