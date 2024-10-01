def string_matching(s)
    : if s in "abcd" : print('abcd') elif 'ab' in s
    : print('contains ab') elif s.endswith('abc')
    : print('ends with abc') else : print('no match found')