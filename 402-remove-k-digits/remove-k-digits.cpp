class Solution {
public:
    string removeKdigits(string num, int k) {
    
    
    // Traverse the number
    stack<char>st;
    for (int i = 0; i < num.size(); i++) {
        while (!st.empty() && num[i] < st.top() && k > 0) {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }

    // Remove remaining k digits if necessary
    while (!st.empty() && k > 0) {
        st.pop();
        k--;
    }

    // Use a vector to avoid expensive string concatenation
    vector<char> temp;
    while (!st.empty()) {
        temp.push_back(st.top());
        st.pop();
    }

    // Reverse the vector to get the correct order
    reverse(temp.begin(), temp.end());

    // Remove leading zeros
    int i = 0;
    while (i < temp.size() && temp[i] == '0') {
        i++;
    }

    // If the number becomes empty, return "0"
    if (i == temp.size()) return "0";

    return string(temp.begin() + i, temp.end());


    }
};