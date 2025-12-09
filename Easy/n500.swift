func findWords(_ words: [String]) -> [String] {
    let firstRow = Set("qwertyuiop")
    let secondRow = Set("asdfghjkl")
    let thirdRow = Set("zxcvbnm")
    var ans = [String]()

    for word in words {
        let lowerWord = Set(word.lowercased())
        if lowerWord.isSubset(of: firstRow) || lowerWord.isSubset(of: secondRow) || lowerWord.isSubset(of: thirdRow) {
            ans.append(word)
        }
    }
    return ans
}