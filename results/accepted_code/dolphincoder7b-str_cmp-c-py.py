def strcmp(a: str, b: str) -> int:
    if a == b:
        return 0
    elif a < b:
        return -1
    else:
        return 1


def strcasecmp(a: str, b: str) -> bool:
    return cmp(a.lower(), b.lower()) == 0


def main():
    print("	eq  , ne  , gt  , lt  , ge  , le")
    while True:
        a = input()
        if not a:
            break
        b = input()
        eq = int(a == b)
        ne = int(a != b)
        gt = int(strcmp(a, b) > 0)
        lt = int(strcmp(a, b) < 0)
        ge = int(strcmp(a, b) >= 0)
        le = int(strcmp(a, b) <= 0)

        print("%s%2d%2d%2d%2d%2d%2d  %s" % (a, eq, ne, gt, lt, ge, le, b))

        ceq = int(strcasecmp(a, b))
        cne = int(not strcasecmp(a, b))
        cgt = int(strcmp(b, a) > 0)
        clt = int(strcmp(b, a) < 0)
        cge = int(strcmp(b, a) >= 0)
        cle = int(strcmp(b, a) <= 0)

        print(
            "%s%2d%2d%2d%2d%2d%2d  %s ignoring case"
            % (a, ceq, cne, cgt, clt, cge, cle, b)
        )


if __name__ == "__main__":
    main()
