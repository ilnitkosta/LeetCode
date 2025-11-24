func numJewelsInStones(_ jewels: String, _ stones: String) -> Int {
    var res = 0
    for i in stones {
        if jewels.contains(i) {
            res += 1
        }
    }
    return res
}