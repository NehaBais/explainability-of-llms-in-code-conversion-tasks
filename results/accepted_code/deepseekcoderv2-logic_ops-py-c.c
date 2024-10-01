#Enter your code here.Read input from STDIN.Print output to STDOUT
def logic(a, b)
    : print('a and b:', a and b) print('a or b:', a or b) print('not a:', not a)

          logic(*map(lambda x
                     : bool(int(x)), input().split()))