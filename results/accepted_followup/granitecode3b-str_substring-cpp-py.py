# Display a substring:
# starting from n characters in and of m length;
# starting from n characters in, up to the end of the string;
# whole string minus the last character;
# starting from a known character within the string and of m length;
# starting from a known substring within the string and of m length.
 
s = "0123456789"
n = 3
m = 4
c = '2'
sub = "456"
 
print(s[n:n+m]) # starting from n characters in and of m length
print(s[n:]) # starting from n characters in, up to the end of the string
print(s[:-1]) # whole string minus the last character
print(s.find(c):s.find(c)+m] # starting from a known character within the string and of m length
print(s.find(sub):s.find(sub)+m] # starting from a known substring within the string and of m length