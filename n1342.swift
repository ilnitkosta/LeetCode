func numberOfSteps(_ num: Int) -> Int {
    var curr = num
    var step = 0
    while curr > 0 {
        if curr % 2 == 0 {
            curr /= 2
        } else {
            curr -= 1
        }
        step += 1
    }
    return step
}