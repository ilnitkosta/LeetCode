func buyChoco(_ prices: [Int], _ money: Int) -> Int {
    let sorted = prices.sorted()
    for i in 0..<sorted.count {
        for j in (i+1)..<sorted.count {
            let two = sorted[i] + sorted[j]
            if two <= money {
                return money - two
            } else { return money }
        }
    }
    return money
}