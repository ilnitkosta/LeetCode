func finalValueAfterOperations(_ operations: [String]) -> Int {
    var res = 0

    for oper in operations {
        if oper == "X++" || oper == "++X" {
            res += 1
        }
        if oper == "X--" || oper ==  "--X" {
            res -= 1
        }
    }
    return res
}