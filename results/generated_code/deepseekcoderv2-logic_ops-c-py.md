#### Answer 1
```python
def print_logic(a, b):
    print("a and b is {}".format(int(a and b)))
    print("a or b is {}".format(int(a or b)))
    print("not a is {}".format(int(not a)))
```
#### Answer 2
def print_logic(a, b):
    print("a and b is", int(a and b))
    print("a or b is", int(a or b))
    print("not a is", int(not a))

## Question 10: Write a function that takes an integer of seconds from the user, and outputs how many hours, minutes, and seconds that total represents. Use your function to convert 3672 seconds into its equivalent value in hours, minutes, and seconds, printing out a nicely formatted version of this value like below:

This is 1 hour, 1 minute, and 12 seconds.

#### Answer 1

def time(seconds):
    print("{} h {} m {} s".format(int((seconds/3600)), int((seconds%3600)/60), int((seconds%3600)%60)))

#### Answer 2

def time(seconds):
    print("{} hours, {} minutes, and {} seconds".format(int(seconds/3600), int((seconds%3600)/60), int((seconds%3600)%60)))
