*This project has been created as part of the 42 curriculum by \<copassam\>.*

---

# push_swap

## Description

**push_swap** is an algorithmic sorting project from the 42 curriculum. The goal is to sort a stack of integers using a limited set of operations, using the **fewest possible moves**.

You are given two stacks (`a` and `b`) and can only manipulate them with 11 specific instructions. Stack `a` starts with a random list of integers; stack `b` starts empty. The program must output the shortest sequence of instructions that sorts stack `a` in ascending order (smallest on top).

### Available Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the top 2 elements of stack a |
| `sb` | Swap the top 2 elements of stack b |
| `ss` | `sa` and `sb` simultaneously |
| `pa` | Push top of b onto a |
| `pb` | Push top of a onto b |
| `ra` | Rotate a upward (top becomes bottom) |
| `rb` | Rotate b upward |
| `rr` | `ra` and `rb` simultaneously |
| `rra` | Reverse rotate a (bottom becomes top) |
| `rrb` | Reverse rotate b |
| `rrr` | `rra` and `rrb` simultaneously |

### Algorithm

The program selects the best algorithm based on input size:

- **n = 2** — swap if needed (1 op max)
- **n = 3** — hardcoded rank-based pattern matching (2 ops max)
- **n = 4–5** — push min(s) to b, sort remaining 3, push back
- **n ≥ 6** — **Cost-based Greedy + Chunking**

#### Cost-based Greedy (for n ≥ 6)

**Phase 1 — Chunking (push to b):**
Divide all elements into chunks by global rank (e.g. rank 0–19, 20–39, …). Scan stack `a` repeatedly and push any element whose rank falls in the current chunk window to `b`. This groups values loosely by size in `b`, reducing the cost of pulling them back later.

**Phase 2 — Sort 3:**
Sort the 3 remaining elements in `a` with at most 2 operations. After this, `a` is *circular sorted* — meaning it forms a valid ascending sequence when read circularly (e.g. `[6, 7, 8]` or `[7, 8, 6]`).

**Phase 3 — Push back (cheapest move):**
For **every** element in `b`, compute the total rotation cost to insert it correctly into `a` while keeping `a` circular sorted. Pick the element with the **lowest total cost** and move it. Repeat until `b` is empty.

The cost for each element is:
- `cost_b` = rotations needed to bring it to the top of `b`
- `cost_a` = rotations needed to bring its **successor** (next rank globally) to the top of `a`
- When both stacks rotate in the same direction, `rr`/`rrr` is used to save one operation per step

**Phase 4 — Final alignment:**
Rotate `a` until the minimum value is on top.

### Key insight: Global ranks are immutable

Global rank is computed once across both stacks combined. Moving an element between stacks (or rotating) changes its **position**, not its **value** — so its rank stays the same. 

Therefore, ranks remain valid throughout the algorithm,
avoiding unnecessary recomputation during chunk processing
and cost calculation.

---

## Instructions

### Requirements

- C compiler (`cc`) with flags `-Wall -Wextra -Werror`
- GNU Make

### Compilation

```bash
# Compile push_swap
make

# Clean object files
make clean

# Full clean (objects + binaries)
make fclean

# Recompile from scratch
make re
```

### Usage

```bash
# Sort a list of numbers — prints the instruction sequence
./push_swap 4 67 3 87 23

# No output if already sorted
./push_swap 1 2 3

# Accepts a quoted string
./push_swap "4 67 3 87 23"

# Count the number of operations
./push_swap 4 67 3 87 23 | wc -l

# Verify correctness using the checker (42)
ARG="4 67 3 87 23"
./push_swap $ARG | ./checker_OS $ARG
# Output: OK

# Error cases (prints "Error" to stderr, exits with status 1)
./push_swap 1 2 abc        # non-integer argument
./push_swap 1 1 2          # duplicate values
./push_swap 2147483648     # integer overflow
```

---

## Resources

### References

- [Sorting algorithms — Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [Push_swap — The least amount of moves with two stacks (Medium)](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
- [Turk Algorithm — cost-based greedy approach (Medium)](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- [push_swap visualizer](https://github.com/o-reo/push_swap_visualizer) — visual step-by-step replay of instructions
- [42 Norm v4 — coding style requirements](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf)

### AI Usage

AI was used during this project for the following tasks:

| Task | Part of project |
|------|----------------|
| Explaining the circular sorted stack concept and why successor (not predecessor) must be at top before `pa` | Algorithm design — Phase 3 |
| Identifying that global rank does not change when elements are moved, enabling O(n²) optimization | `assign.c`, `sort_big.c` |
| Debugging `find_target_pos` logic (successor vs predecessor, local vs global rank) | `find_target.c` |
| Tracing cost calculations step by step to catch off-by-one errors | `cost.c` |
| Clarifying that `do_cheapest_move` must evaluate **all** elements in `b` before selecting — not just the top | `cost.c` |


All code was written, reviewed, tested, and understood by the author. AI-generated suggestions were always verified manually and tested against the checker before use.