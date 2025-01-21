def print_factors(nr):
    if nr < 1:
        print(f"Factors of {nr} not computed")
        return

    print(f"Factors of {nr}: 
"))
    fs = [1]
    d = 2
    e = 0
    while d * d <= nr and e <= nr//2:
        if nr % d == 0:
            for _ in range(e):
                fs.append(fs[-1]*int(nr/d)))
            e += 1
        d += 1

    print(f"Factors of {nr}: 
{fs}")
    print(f"Number of factors = 
{len(fs)}")