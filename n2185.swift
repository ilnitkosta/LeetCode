func prefixCount(_ words: [String], _ pref: String) -> Int {
    var count = 0
    for word in words {
        if word.starts(with: pref) {
            count += 1
        }
    }
    return count
}