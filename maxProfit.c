int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;
    if(pricesSize < 1) return 0;
    for(int i = 0; i<pricesSize; i++)
    {
        if(prices[i] < minPrice) minPrice = prices[i];
        else
        {
            if(maxProfit < prices[i] - minPrice) maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}