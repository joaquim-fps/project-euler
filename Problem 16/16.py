def solve():
    import math

    total = 0
    power = str(int(math.pow(2, 1000)))

    for digit in power:
        total = total + int(digit)

    return total
