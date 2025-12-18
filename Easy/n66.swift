func plusOne(_ digits: [Int]) -> [Int] {
    var digits = digits

    for i in (0..<digits.count).reversed() {
        if digits[i] < 9 {
            digits[i] += 1
            return digits
        } else {
            digits[i] = 0
        }
    }

    return [1] + digits
}