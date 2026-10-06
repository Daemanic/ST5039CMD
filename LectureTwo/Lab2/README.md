# [2] Lab Task
> Investigating Process Lifecycle and OS Interaction

## [~] Introduction

Putting process and resource theory into practice by writing C programs that interact directly with the Linux kernel — querying their own process identity, controlling their execution time, reading user input, and reporting success or failure back to the shell via exit codes.

## [~] Objective

Bridge the gap between high-level C code and low-level OS process management using system calls like `getpid()`, `sleep()`, and `scanf()`, and by observing return codes. This lab demonstrates that a running C program is an active process managed by the Linux kernel — not just a static file.

---

## [?] Task Breakdown

| Task | File | What it demonstrates |
|---|---|---|
| 1 | `task_1.c` | A process that stays alive for 30 seconds (a visible, long-running process you can observe with `ps`). |
| 2 | `task_2.c` | Reading a process's own PID and its parent's PID (PPID) via `getpid()` / `getppid()`. |
| 3 | `task_3.c` | Returning different exit codes (`0` vs `1`) depending on input, read back via `echo $?`. |
| 4 | `task_4.c` | Reading string input from the user with `scanf()`. |
| 5 | `task_5.c` | Interactive branching: one path sleeps and exits `0`, the other exits `1` immediately. |

---

## [?] Reproducing Steps

**Compilation:**
```bash
gcc task_1.c -o task1
gcc task_2.c -o task2
gcc task_3.c -o task3
gcc task_4.c -o task4
gcc task_5.c -o task5
```

**Task 1 — long-running process:**
```bash
./task1 &
ps aux | grep task1
```

**Task 2 — PID / PPID:**
```bash
./task2 &
ps -p <pid-shown> -o pid,ppid,cmd
```

**Task 3 — exit code from input sign:**
```bash
./task3
# enter a positive integer → prints "success", exits 0
echo $?

./task3
# enter a negative integer → prints "failure", exits 1
echo $?
```

**Task 4 — reading username:**
```bash
./task4
# enter a username
```

**Task 5 — continue or exit:**
```bash
./task5
# enter 1 → sleeps 5s, exits 0
echo $?

./task5
# enter 0 → exits immediately with 1
echo $?
```

> **Note:** `ps` keyword names differ between BSD (macOS) and GNU (Linux) `ps`. Use `comm`/`command` on macOS and `cmd`/`args` on Linux.

---

## [~] Project Structure

```
Lab2/
│── task_1.c   │── task1
│── task_2.c   │── task2
│── task_3.c   │── task3
│── task_4.c   │── task4
│── task_5.c   │── task5
└── README.md
```