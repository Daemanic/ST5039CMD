# [1] Lab Task
> GCC Compilation Structure in C-Programming

## [~] Objective

Demonstration on how data type sizes vary across different system architecutes — directly impacting OS memory allocation, a virtual view of memory divided into segments (operating systems create a process address space) and differentiating between `stack` addresses, `heap` addresses and `data/bss` addresses.

---

## [?] Task Breakdown

| File | Binary | What it demonstrates |
|---|---|---|
| bytesize.c | bytesizes | The size in bytes of each data type on the current architecture. |
| allocation.c | allocate | Pointers and memory allocation. |
| variable_addr.c | address | The addresses of different variables, showing which segment each one belongs to. |

---

## [?] Reproducing Steps

**Compilation and execution:**
```bash
gcc allocation.c -o allocation
./allocation

gcc bytesize.c -o bytesize
./bytesize

gcc variable_addr.c -o address
./address
```

> **Note:** address change between runs because of `address space layout randomization`. compare the relative positions of stack, heap and data/bss rather than exact values. type sizes can also differ between operating systems and architectures.

---

## [~] Project Structure

```
Lab1/
│── allocation.c        ← pointer and memory allocation
│── ./allocate
│── bytesize.c          ← observing data type sizes
│── ./bytesizes
│── variable_addr.c     ← observing variable addresses
│── ./address
└── README.md
```