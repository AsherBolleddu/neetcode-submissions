class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        low = prices[0]
        max_profit = 0
        for r in range(1, len(prices)):
            low = min(prices[r], low)
            max_profit = max(max_profit, prices[r] - low)
        return max_profit