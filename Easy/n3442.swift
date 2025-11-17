func maxDifference(_ s: String) -> Int {
    var freq = [Character:Int]()
    var maxOdd = 0; var minEven = s.count

    for char in s {
        freq[char, default: 0] += 1
    }
    for val in freq.values {
        if val % 2 == 0 {
            minEven = min(minEven, val)
        } else { maxOdd = max(maxOdd, val) }
    }

    return maxOdd - minEven
}