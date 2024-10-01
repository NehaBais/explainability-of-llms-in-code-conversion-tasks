class Factors:
    def __init__(self):
        self.list = []
        self.count = len(self.list)

    def add_factors(self, num):
        i = 1
        while i * i < num:
            if num % i == 0:
                self.list.extend([i, num // i])
            i += 1
        if i * i == num:
            self.list.append(i)
        self.count = len(self.list)

    def print_factors(self):
        print(", ".join(map(str, self.list)))


factor_obj = Factors()
nums2factor = [2059, 223092870, 3135, 45]
for i in nums2factor:
    factor_obj.add_factors(i)
    print("Factors of", i, "are :")
    factor_obj.print_factors()
