class Solution:
    def reverseWords(self, s: str) -> str:
        return ' '.join(word[::-1] for word in s.split())


# example 
sol = Solution()
test = "Let's take Leetcode contest"

print(sol.reverseWords(test)) # output "s'teL ekat edocteeL tsetnoc"