# Required imports
import sys


def compare(a, B):
    print("%-8s %3d %3d %3d %3d %3d" % (A, A == B, A != B, A > B, A < B, A >= B))


def comparecase(A, B):
    print(
        "%-8s %3d %3d %3d %3d %3d"
        % (
            A,
            A.lower() == B.lower(),
            A.lower() != B.lower(),
            A.lower() > B.lower(),
            A.lower() < B.lower(),
            A.lower() >= B.lower(),
        )
    )


if __name__ == "__main__":
    print("	eq , ne , gt , lt , ge , le")
    for i in range(len(sys.argv) - 1):
        A = sys.argv[i]
        B = sys.argv[i + 1]
        compare(A, B)
        comparecase(A, B)
