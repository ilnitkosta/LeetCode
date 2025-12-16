func fizzBuzz(_ n: Int) -> [String] {
    var answer: [String] = []

    for c in 1...n {
        if c % 15 == 0 { answer.append("FizzBuzz") }
        else if c % 5 == 0 { answer.append("Buzz") }  
        else if c % 3 == 0 { answer.append("Fizz") }
        else { answer.append("\(c)") } 
    }
    return answer
}       