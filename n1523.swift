func countOdds(_ low: Int, _ high: Int) -> Int {
    var res = 0
    for i in low...high {
        if i%2 != 0 {
            res += 1 
        } 
    }
    return res
}

//example usage
print(countOdds(12,90)) // 39
print(countOdds(8,20)) // 6
print(countOdds(3,7)) // 3
print(countOdds(4,4)) // 0