func findFinalValue(_ nums: [Int], _ original: Int) -> Int {
      var original = original
      while nums.contains(original) {
            original *= 2
      }
      return original
}