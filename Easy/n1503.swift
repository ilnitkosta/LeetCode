func getLastMoment(_ n: Int, _ left: [Int], _ right: [Int]) -> Int {
    var res = 0
    for pos in right {
        res = max(res, n - pos)
    }
    for pos in left {
        res = max(res, pos)
    }
    return res
}