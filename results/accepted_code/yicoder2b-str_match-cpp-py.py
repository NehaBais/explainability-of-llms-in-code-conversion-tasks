# Python 3.x Code:
import re

# Initializing strings
s1 = "abcd"
s2 = "abab"
s3 = "ab"


def startswith(s1, s3):
    return s1.startswith(s3)


def contains(s1, s2):
    return s1.find(s2) != -1


def ends_with(s1, s3):
    return s1.endswith(s3)


# print startswith result of s1 and s3
print(startswith(s1, s3))

# print contains result of s1 and s2
print(contains(s1, s2))

# print ends_with result of s1 and s3
print(ends_with(s1, s3))
