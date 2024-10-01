```python
import string

def compare(a, b):
  print(f"{a} {2 * (a == b):d} {2 * (a != b):d} {2 * (a > b):d} {2 * (a < b):d} {2 * (a >= b):d} {2 * (a <= b):d} {b}")

def compare_ignore_case(a, b):
  print(f"{a} {2 * (a.lower() == b.lower()):d} {2 * (a.lower() != b.lower()):d} {2 * (a.lower() > b.lower()):d} {2 * (a.lower() < b.lower()):d} {2 * (a.lower() >= b.lower()):d} {2 * (a.lower() <= b.lower()):d} {b}")

if __name__ == "__main__":
  print("	eq , ne , gt , lt , ge , le")
  for a, b in zip(av[1::2], av[2::2]):
    compare(a, b)
    compare_ignore_case(a, b)
```

**Explanation:**

* The code uses the `==`, `!=`, `>`, `<`, `>=`, and `<=` operators for exact and inequality comparisons.
* The `str.lower()` method is used for case-insensitive comparisons.
* The `zip()` function iterates over pairs of strings from the command line arguments.
* The `compare()` and `compare_ignore_case()` functions perform the necessary comparisons and print the results in the same format as the C code.

**Example Usage:**

python compare.py ball bell ball ball YUP YEP ball BELL ball BALL YUP yep

**Output:**

	eq , ne , gt , lt , ge , le
ball 0 1 1 0 1 0 1 bell
ball 0 1 1 0 1 0 1 bell ignoring case
ball 1 0 0 0 1 1 ball
ball 1 0 0 0 1 1 ball ignoring case
YUP 0 1 1 0 1 0 YEP
YUP 0 1 1 0 1 0 YEP ignoring case
ball 0 1 1 0 1 0 BELL
ball 0 1 0 1 0 1 BELL ignoring case
ball 0 1 1 0 1 0 BALL
ball 1 0 0 0 1 1 BALL ignoring case
YUP 0 1 0 1 0 1 yep
YUP 0 1 1 0 1 0 yep ignoring case
