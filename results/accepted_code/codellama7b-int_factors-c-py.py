# Factors is a class that stores the factors of a number
class Factors:
    def __init__(self):
        self.factors = []


# factor takes an integer num and a Factors object fctrs as input
def factor(num, fctrs):
    # allocate memory for the list of factors
    fctrs.factors = [None] * 301

    # start computing the factors
    dvsr = 1
    while dvsr * dvsr < num:
        if num % dvsr != 0:
            dvsr += 1
            continue
        fctrs.factors.append(dvsr)
        fctrs.factors.append(num / dvsr)
        dvsr += 1
    if dvsr * dvsr == num:
        fctors.factors.append(dvsr)


# main function to test the factor function
def main():
    # list of numbers to be factored
    nums2factor = [2059, 223092870, 3135, 45]

    # initialize a Factors object to store the factors
    ftors = Factors()

    # loop through each number in the list and factor it
    for num in nums2factor:
        factor(num, ftors)

        # print the factors of each number
        print("Factors of", num, ":")
        sep = " "
        for factor in ftors.factors:
            print(sep, factor)
            sep = ","
