/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let minprice = Infinity, bestprofit = 0;
    for (let i = 0; i < prices.length; i++) {
        minprice = Math.min(minprice, prices[i]);
        bestprofit = Math.max(bestprofit, prices[i] - minprice);
    }
    return bestprofit;
};