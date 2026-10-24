# c-to-learn

Two C console exercises for reading unique integers and calculating their average.

## Assignment

Read a count of integer values, reject duplicates, and print their average. The original assignment requires a dynamically allocated array accessed using pointer arithmetic.

## Files

- [`assingment.c`](assingment.c): the original grade-entry implementation using `malloc` and pointers. The filename is spelled `assingment.c` in the repository.
- [`new.c`](new.c): an alternative using a variable-length array and duplicate-entry retries.
- [`1.png`](1.png): an existing screenshot.

## Build and run

With GCC:

```bash
gcc -std=c99 -Wall -Wextra assingment.c -o assi
./assi
```

Or build the alternative:

```bash
gcc -std=c99 -Wall -Wextra new.c -o unique-average
./unique-average
```

On Windows, run the resulting `.exe` from your terminal. Enter a positive count, then integer values when prompted. C99 is used because the source includes declarations after statements and the alternative uses a variable-length array.

## Learning-project limitations

- Input parsing, positive counts, and allocation success are not validated. Zero counts can lead to division by zero; large counts can exhaust memory or stack space.
- The original duplicate-check loop includes the next uninitialized array slot and does not fully restart validation after a replacement. It can read uninitialized memory and does not reliably enforce uniqueness.
- The original allocation is not freed before exit. These are exercises, not hardened input-processing examples.

Ahmad Einieh — احمد عينية. All rights reserved.
احمد عينية
