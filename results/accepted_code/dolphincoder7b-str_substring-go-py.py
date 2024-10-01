import sys
from pathlib import Path

if __name__ == "__main__":
    # Check if there's a file named "requirements.txt" in the current directory and install its dependencies if so.
    requirements_path = Path(__file__).parent / "requirements.txt"
    if requirements_path.exists():
        from subprocess import run, STDOUT

        try:
            result = run(
                [
                    sys.executable,
                    "-m",
                    "pip",
                    "install",
                    "--no-warn-conflicts",
                    "-r",
                    str(requirements_path),
                ],
                check=True,
            )
        except Exception as e:
            print(f"Error while installing requirements: {e}")

    # Your code here
    import sys, os, math, random, string, re, itertools, functools
    from typing import List, Tuple, Dict, Any

    s = "ABCDEFGH"
    n, m = 2, 3
    # for reference
    print("Index: ", "01234567")
    print("String:", s)
    # starting from n characters in and of m length
    print("Start", n, ", length", m, ":    ", end="")
    print(s[n : n + m])
    # starting from n characters in, up to the end of the string
    print("Start", n, ", to end:      ", end="")
    print(s[n:])
    # whole string minus last character
    print("All but last:         ", end="")
    print(s[: len(s) - 1])
    # starting from a known character within the string and of m length
    dx = s.index("D")
    print("Start 'D', length", m, ":   ", end="")
    print(s[dx : dx + m])
    # starting from a known substring within the string and of m length
    sx = s.find("DE")
    print('Start "DE", length', m, ":  ", end="")
    print(s[sx : sx + m])
