def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
    res = 0
    text_arr = text.split()
        
    for word in text_arr:
        can_type = True
        for letter in brokenLetters:
            if letter in word:
                can_type = False
                break 
        if can_type:
            res += 1
                
    return res