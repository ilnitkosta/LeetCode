func transformArray(_ nums: [Int]) -> [Int] {
    var nums = nums

    for i in 0..<nums.count {
        if nums[i] % 2 == 0 {
            nums[i] = 0
        } else {
            nums[i] = 1
        }
    }
    nums.sort()
    return nums
}