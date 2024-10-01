Sure! Here's the Python code that does the same thing as the C code you provided:
```
# Define comparison functions
def streq(a, b):
 return a == b
def strne(a, b):
 return a != b
def strlt(a, b):
 return a < b
def strle(a, b):
 return a <= b
def strgt(a, b):
 return a > b
def strge(a, b):
 return a >= b
# Define case-insensitive comparison functions
def streq_ci(a, b):
 return a.lower() == b.lower()
def strne_ci(a, b):
 return a.lower() != b.lower()
def strlt_ci(a, b):
 return a.lower() < b.lower()
def strle_ci(a, b):
 return a.lower() <= b.lower()
def strgt_ci(a, b):
 return a.lower() > b.lower()
def strge_ci(a, b):
 return a.lower() >= b.lower()
# Define main function to compare strings
def main():
 tests = [
 ("ball", "bell", 0, 1, 0, 1), # eq, ne, gt, lt, ge, le
 ("ball", "BELL", 0, 1, 0, 1), # eq, ne, gt, lt, ge, le (ignoring case)
 ("ball", "bell", 1, 0, 0, 1), # ne, eq, lt, gt, le, ge
 ("ball", "BELL", 1, 0, 0, 1), # ne, eq, lt, gt, le, ge (ignoring case)
 ("YUP", "YEP", 1, 0, 1, 0), # ne, eq, gt, lt, le, ge
 ("YUP", "YEP", 1, 0, 1, 0), # ne, eq, gt, lt, le, ge (ignoring case)
 ("ball", "bell", 0, 1, 0, 1), # eq, ne, gt, lt, ge, le
 ("ball", "BELL", 0, 1, 0, 1), # eq, ne, gt, lt, ge, le (ignoring case)
 ("ball", "bell", 1, 0, 0, 1), # ne, eq, lt, gt, le, ge
 ("ball", "BELL", 1, 0, 0, 1), # ne, eq, lt, gt, le, ge (ignoring case)
 ("YUP", "YEP", 1, 0, 1, 0), # ne, eq, gt, lt, le, ge
 ("YUP", "YEP", 1, 0, 1, 0), # ne, eq, gt, lt, le, ge (ignoring case)
 ("ball", "bell", 0, 1, 0, 1), # eq, ne, gt, lt, ge, le
 ("ball", "BELL", 0, 1, 0, 1), # eq, ne, gt, lt, ge, le (ignoring case)
 ("ball", "bell", 1, 0, 0, 1), # ne, eq, lt, gt, le, ge
 ("ball", "BELL", 1, 0, 0, 1), # ne, eq, lt, gt, le, ge (ignoring case)
 ("YUP", "YEP", 1, 0, 1, 0), # ne, eq, gt, lt, le, ge
 ("YUP", "YEP", 1, 0, 1, 0), # ne, eq, gt, lt, le, ge (ignoring case)
 ]
 
 for test in tests:
 a, b, e, n, g, l = test
 print("%s%2d%2d%2d%2d%2d %s" % (a, streq(a, b), strne(a, b), strgt(a, b), strlt(a, b), strge(a, b), strle(a, b), b))
 print("%s%2d%2d%2d%2d%2d %s ignoring case" % (a, streq_ci(a, b), strne_ci(a, b), strgt_ci(a, b), strlt_ci(a, b), strge_ci(a, b), strle_ci(a, b), b))
 
if __name__ == "__main__":
 main()
 
```

