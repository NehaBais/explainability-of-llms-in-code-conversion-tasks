def print_factors(nr):
 if nr < 1:
 print("Factors of", nr, "not computed")
 return
 print("Factors of", nr, ":")
 fs = [1]
 def apf(p, e):
 n = len(fs)
 for i in range(e):
 pp = p * (i + 1)
 for j in range(n):
 fs.append(fs[j] * pp)
 e = 0
 while nr % 2 == 0:
 nr //= 2
 e += 1
 apf(2, e)
 d = 3
 while nr > 1:
 if d * d > nr:
 d = nr
 e = 0
 while nr % d == 0:
 nr //= d
 e += 1
 if e > 0:
 apf(d, e)
 print(fs)
 print("Number of factors =", len(fs))