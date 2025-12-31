func minOperations(_ nums: [Int], _ k: Int) -> Int {
        return nums.reduce(0, +) % k
}