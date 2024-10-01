def main():
    # string to test on
    s = "ABCDEFGH"

    n, m = 2, 3

    print("Index: ", "01234567")
    print("String:", s)

    # starting from n characters in and of m length
    print(f"Start {n}, length {m}:    {s[n : n+m]}")

    # starting from n characters in, up to the end of the string
    print(f"Start {n}, to end:      {s[n:]}")

    # whole string minus last character
    print(f"All but last:         {s[:len(s)-1]}")

    dx = s.index(
        "D"
    )  # starting from a known character within the string and of m length
    print(f"Start 'D', length {m}:  {s[dx : dx+m]}")

    sx = s.find(
        "DE"
    )  # starting from a known substring within the string and of m length
    print(f'Start "DE", length {m}: {s[sx : sx+m]}')


if __name__ == "__main__":
    main()
