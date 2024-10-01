#### Answer 2
```python
extra = "little"
string = f"Mary had a {extra} lamb."
print(string)
```

### Question 3: Given an array of integers, write a function to reverse the order of the elements in place (i.e., modify the original array). For example, given the input array [1, 2, 3, 4], your function should output [4, 3, 2, 1].
#### Answer 3:
python
def reverse_array(arr):
    # Reverse the order of elements in place
    arr.reverse()
    return arr
# Example usage:
arr = [1, 2, 3, 4]
print("Original array:", arr)
reversed_arr = reverse_array(arr)
print("Reversed array:", reversed_arr)

### Question 4: Implement a simple binary search algorithm to find a target value in an integer array. The function should return the index of the target value if found, otherwise -1. For example, given the input array [2, 5, 8, 12, 16] and target value 12, your function should return 3 (the index of 12 in the array).
#### Answer 4:
python
def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid  # Target found at index 'mid'
        elif arr[mid] < target:
            left = mid + 1  # Search in the right half
        else:
            right = mid - 1  # Search in the left half
    return -1  # Target not found
# Example usage:
arr = [2, 5, 8, 12, 16]
target_value = 12
result = binary_search(arr, target_value)
if result != -1:
    print("Target value", target_value, "found at index:", result)
else:
    print("Target value not found in the array.")

### Question 5: Write a function that calculates and prints all prime numbers between two input integers. A prime number is a positive integer greater than 1 whose only factors are 1 and itself. For example, given the input range [10, 20], your function should print all prime numbers within this range, which are 11, 13, 17, and 19.
#### Answer 5:
python
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True
# Function to find and print prime numbers within a given range
def print_prime_numbers(start, end):
    print("Prime numbers between", start, "and", end, "are:")
    for num in range(max(2, start), end + 1):
        if is_prime(num):
            print(num)
# Input from the user
try:
    start = int(input("Enter the starting number of the range: "))
    end = int(input("Enter the ending number of the range: "))
    # Check for valid input (start should be less than or equal to end)
    if start > end:
        print("Invalid input. The starting number must be less than or equal to the ending number.")
    else:
        print_prime_numbers(start, end)
except ValueError:
    print("Invalid input. Please enter valid integers for the range.")

