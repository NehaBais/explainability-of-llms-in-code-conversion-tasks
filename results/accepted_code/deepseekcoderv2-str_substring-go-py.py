def substring_in():
"""Return a substring of given string."""
# starting from n characters in and of m length.
n = 2
m = 3
print(f"Start {n}, length {m}:    {'ABCDEFGH'[n:n+m]}")
# starting from n characters in, up to the end of the string.
print(f'Start {n}, to end:      {"ABCDEFGH"[n:]}')
# whole string minus last character.
print('All but last:         ', 'ABCDEFGH'[:-1])
# starting from a known character within the string and of m length.
dx = "ABCDEFGH".find("D")  # use str.index for byte strings
print(f"Start 'D', length {m}:  {'ABCDEFGH'[dx : dx+m]}")
# starting from a known substring within the string and of m length.
sx = "ABCDEFGH".find("DE")
print('Start "DE", length %d: %s' % (m, 'ABCDEFGH'[sx : sx+m]))