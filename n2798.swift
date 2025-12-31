func numberOfEmployeesWhoMetTarget(_ hours: [Int], _ target: Int) -> Int {
    var res = 0

    for hour in hours {
        if hour >= target {
            res += 1
        }
    }
    return res

}