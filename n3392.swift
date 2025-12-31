func countSubarrays(_ nums: [Int]) -> Int {
    var res = 0
    let n = nums.count

    for i in 0..<n-2 {
        let f = nums[i]
        let s = nums[i + 1]
        let t = nums[i + 2]

        if (f + t) * 2 == s {
            res += 1
        }
    }

    return res
}