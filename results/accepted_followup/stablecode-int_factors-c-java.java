class Factors:
    def __init__(self):
        self.list = []
        self.count = 0

    def xferFactors(self, fctrs, flist, flix):
        newSize = fctrs.count + flix
        if newSize > flix:
            fctrs.list = list(range(len(fctrs.list) * 2)))[:fctrs.count]
            fctrs.list.subList(fctrs.count, fctrs.count + flix)).clear()
        else:
            tempList = [0] * (newSize * 2 - 1)
            System.arraycopy(fctrs.list.toArray(), 0, tempList, 0, fctrs.count))
            tempList = list(range(len(fctrs.list) * 2)))[:newSize * 2 - 1]
        for ij in range(flix):
            ix = fctrs.count + ij
            flist = flist[ij]
            fctrs.list.set(ix, flist))
        fctrs.count = newSize
        return fctrs

    def factor(self, num, factors):
        if factors == None:
            factors = Factors()
        else:
            factors.list.subList(0, factors.count)).clear()
        factors.list.add(1)
        divisor = 2
        while divisor * divisor <= num:
            if num % divisor == 0:
                factors.list.set(factors.count, divisor))
                factors.list.set(factors.count + 1, num // divisor)))
                factors.count += 2
            divisor += 1
        if divisor * divisor == num:
            factors.list.add(num // divisor))
            factors.count += 1
        return factors

numbersToFactor = [2059, 223092870, 31355, 45]]
for number in numbersToFactor:
    factors = Factors()
    factors = factor(number, factors))
    print(f"Factors of {number}: {factors.list}")