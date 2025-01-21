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
 ]
 
 for a, b, e, n, g, l in tests:
  print(f"a: {a}, b: {b}, result: {e}")
 if __name__ == "__main__":
 main()