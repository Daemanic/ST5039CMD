# [2] Lab Task
> Observing Process Memory Layout (Data, BSS, Heap, Stack)

## [~] Objective

Observe where different variables live in memory and validate the OS memory layout of a running process.

---

## [?] Task Breakdown

| File | Binary | What it demonstrates |
|---|---|---|
| addr_map.c | mapping | Declaring variables for each segment and identifying the highest and lowest segment. |

---

## [?] Reproducing Steps

**Compilation:**
```bash
gcc addr_map.c -o mapping
```

**Execution:**
```bash
./mapping
```

---

## [?] Sample Output

> **Note:** run the compiled file a few times and compare the output (expect different results according to the architecture).

```bash
data (global_init):     0x1047c0000
bss (global_uninit):    0x1047c0004
heap (heap_var):        0x1050b5b80
stack (local_var):      0x16b646c18

stack - heap = 1717112984 bytes (0x66591098)
```

---

## [~] Observations

| Task | Result |
|---|---|---|
| Highest address | Stack. It sits at the top of the address space and grows downward. |
| Lowest adress | Data, floowed by BSS right after it, but is not one of the four varibles. |
| Stack - Heap | A very large gap. Heap grows upward and stack grows downward, and the unused space between them is where each can expand. |

---

## [~] Project Structure

```
Lab1/
│── addr_map.c      │── ./mapping
└── README.md
```