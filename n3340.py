def isBalanced(self, num: str) -> bool:
    res1 = 0
    res2 = 0

    for char in range(len(num)):
        if char % 2 == 0:
            res1 += int(num[char])
        else:
            res2 += int(num[char])
        
    return res1==res2