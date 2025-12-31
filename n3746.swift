func minLengthAfterRemovals(_ s: String) -> Int {
    var a_len = 0
    var b_len = 0

    for char in s {
        if char == "a" {
            a_len += 1
        } else {
            b_len += 1
        }
    }
        
    return abs(a_len - b_len)
}