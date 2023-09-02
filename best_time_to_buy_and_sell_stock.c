int maxProfit(int *prices, int pricesSize)
{
    int min_diff = 0, max_diff = 0, buy_price, sell_price, diff;

    for( int i = 0, j = 0; i < pricesSize; i++ ) {
        min_diff = 0;
        buy_price = prices[i];

        for( j = i + 1; j < pricesSize; j++ ) {
            sell_price = prices[j];
            diff = sell_price - buy_price;

            if( diff > max_diff )
                max_diff = diff;

            if( sell_price <= buy_price ) {
                if( diff <= min_diff ) {
                    min_diff = diff;
                    i = j - 1;

                    if( diff == min_diff )
                        break;
                }
            }
        }
    }

    return max_diff;
} 
