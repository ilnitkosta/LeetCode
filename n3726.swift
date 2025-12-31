import Foundation

func removeZeros(_ n: Int) -> Int {
    return Int(String(n).replacingOccurrences(of: "0", with: ""))!
}