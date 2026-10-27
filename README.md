# CS23331 – Design and Analysis of Algorithms Lab

A simple collection of the programs from the **CS23331 Design and Analysis of Algorithms Laboratory** manual.

I kept the programs grouped the same way as the lab manual, so it is easy to find all five problems from a particular technique in one place.

## Folder structure

```text
DAA-Lab-Programs/
│
├── 01-Time-Complexity/
│   ├── 01A_counter_method.c
│   ├── 01B_counter_method.c
│   ├── 01C_factor.c
│   ├── 01D_nested_log_loops.c
│   └── 01E_reverse_number.c
│
├── 02-Brute-Force/
│   ├── 02A_find_duplicate.c
│   ├── 02B_bubble_sort.c
│   ├── 02C_pair_with_difference.c
│   ├── 02D_unique_element.c
│   └── 02E_most_compatible_dance_pair.c
│
├── 03-Divide-and-Conquer/
│   ├── 03A_majority_element.c
│   ├── 03B_floor_of_x.c
│   ├── 03C_search_sorted_matrix.c
│   ├── 03D_count_zeroes.c
│   └── 03E_peak_element.c
│
├── 04-Greedy/
│   ├── 04A_minimum_currency_change.c
│   ├── 04B_assign_cookies.c
│   ├── 04C_burger_calories.c
│   ├── 04D_stock_profit.c
│   └── 04E_fractional_knapsack.c
│
└── 05-Dynamic-Programming/
    ├── 05A_ways_using_1_and_3.c
    ├── 05B_longest_common_subsequence.c
    ├── 05C_longest_non_decreasing_subsequence.c
    ├── 05D_maximum_monetary_path.c
    └── 05E_maximize_funded_projects.c
```

## Techniques covered

- Finding Time Complexity using the counter method
- Brute Force
- Divide and Conquer
- Greedy
- Dynamic Programming

## Language

The implementations are written in **C**, keeping them straightforward enough to compile and run during lab practice.

## Compile and run

For example:

```bash
gcc 02B_bubble_sort.c -o bubble_sort
./bubble_sort
```

The programs are intentionally kept separate instead of putting everything into one large file. This makes it easier to practice, test, and submit individual experiments.

> Note: The problem statements and grouping are based on the supplied Rajalakshmi Engineering College CS23331 DAA Lab Manual. Some statements in the manual are brief, so the code uses the input/output information given there and a straightforward implementation of the stated technique.
