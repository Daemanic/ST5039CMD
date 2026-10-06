# [2] Lab-Task
> Investigating Process Lifecycle and OS Interaction.

## [?] Introduction

Putting the OS processes and resources theory into practice by writing code that interacts with the Linux kernel to query its own process identity, control its execution time, and report its success or failure back to the OS shell.

## [?] Objective

Bridging the gap between high-level C code and low-level OS process management using system calls like `getpid()`, `sleep()`, and return codes. This lab also demonstrates that C programs are active processes managed by the Linux kernel.

## [?] Reproducing Steps

**Compilation:**

```bash
gcc task_1.c -o task1
gcc task_2.c -o task2
gcc task_3.c -o task3
gcc task_4.c -o task4
gcc task_5.c -o task5
```

**Terminal Execution:**

```bash
./task1 &
ps aux | grep task1

./task2 &
ps -p <pid-shown> -o pid,ppid,cmd

./task3
# enter [+ve integer]
echo $?
./task3
# enter [-ve integer]
echo $?

./task4
# enter [username]

./task5
# enter [1]
echo $?
./task5
# enter [0]
echo $?
```

## [?] Project Structure

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