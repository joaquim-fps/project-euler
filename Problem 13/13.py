def get_nums():
    file = open("13.txt")
    nums = []

    while True:
        num = file.readline()

        if (num == ''):
            break

        aux = []
        
        for i in range(0, len(num)-1):
            aux.append(int(num[i]))

        aux.reverse()
        nums.append(aux)
        
    return nums

def get_sum(nums):
    number = []

    if len(nums) > 0:
        total = 0 # Sum
        over  = 0 # Carry

        for i in range(0, len(nums[0])):
            total = over
            over  = 0

            for num in nums:
                total = total + num[i]

                if total > 9:
                    over  = over + int(total / 10)
                    total = total % 10

            number.append(total)

        # Dealing with final Carry
        if over > 9:
            number.append(over % 10)
            over  = int(over / 10)
            number.append(over)
        else:
            number.append(over)

    number.reverse()
    return number[:10]

def solve():
    nums                    = get_nums()
    number_first_ten_digits = get_sum(nums)

    return number_first_ten_digits

solve()
