def reverse(self, x: int) -> int:
    str_x = str(x)
    if x < 0:
        reversed_str = '-' + str_x[:0:-1]
    else:
        reversed_str = str_x[::-1]
    
    reversed_int = int(reversed_str)

    if reversed_int < -2**31 or reversed_int > 2**31 - 1:
        return 0
        
    return reversed_int