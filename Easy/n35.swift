func searchInsert(_ nums: [Int], _ target: Int) -> Int {
    var res = 0
        
    for i in 0..<nums.count {
        if nums[i] >= target {
            res = i
            break
        }
        if target > nums.last ?? 0 {
            res = nums.count
        }
    }
    return res
}