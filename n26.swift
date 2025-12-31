func removeDuplicates(_ nums: inout [Int]) -> Int {
    let setNums = Set(nums)
    nums = Array(setNums).sorted(by: <)
    return nums.count
}