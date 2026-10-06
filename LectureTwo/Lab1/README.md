# [1] Lab Task
> GCC Compilation Structure in C-Programming

## [~] Objective

Break the normally single-command `gcc compile.c -o compile` process into its four individual stages, to see exactly what the compiler produces at each step before it becomes a final executable.

| Stage | Command | Output | What it is |
|---|---|---|---|
| 1. Preprocessing | `gcc -E compile.c -o compile.i` | `compile.i` | Source with macros expanded, headers included, comments stripped |
| 2. Compilation | `gcc -S compile.i -o compile.s` | `compile.s` | Human-readable assembly code |
| 3. Assembly | `gcc -c compile.s -o compile.o` | `compile.o` | Machine code in object-file format (not yet linked) |
| 4. Linking | `gcc compile.o -o compile` | `compile` | Final, runnable executable |

---

## [?] Reproducing Steps

**Compilation (stage by stage):**
```bash
gcc -E compile.c -o compile.i
gcc -S compile.i -o compile.s
gcc -c compile.s -o compile.o
gcc compile.o -o compile
```

**Inspecting the output at each stage:**
```bash
cat compile.i    # preprocessed source
cat compile.s    # assembly
cat compile.o    # object file (binary — expect unreadable output)
```

**Running the final executable:**
```bash
./compile
```

---

## [~] Project Structure

```
Lab1/
│── compile       ← final executable (stage 4)
│── compile.c     ← original source code
│── compile.i     ← preprocessed source (stage 1)
│── compile.o     ← object file (stage 3)
│── compile.s     ← assembly code (stage 2)
└── README.md
```