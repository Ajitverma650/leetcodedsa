class StockSpanner {
public:

    stack<pair<int, int>> st; // pair -> {price, span}
    StockSpanner() {
        
    }
    
    int next(int price) {

        int span = 1; 

        // Pop all previous prices less than or equal to current price
        while(!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        // Push current price and its calculated span
        st.push({price, span});

        // Return span for current day
        return span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */