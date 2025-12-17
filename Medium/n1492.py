def kthFactor(self, n: int, k: int) -> int:
    ans = []

    for i in range(1, n + 1):
        if n % i == 0:
            ans.append(i)
        
    if k > len(ans): return -1

    return ans[k-1]