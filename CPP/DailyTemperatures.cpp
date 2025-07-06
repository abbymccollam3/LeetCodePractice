class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // monotonic stack 
        int n = temperatures.size();
        stack<int> myStack; // stores indices
        vector<int> numDays(n,0);

        for (int i = 0; i < n; i++) {
            // checking if current temp is warmer than temp at top of stack
            while (!myStack.empty() && temperatures[i] > temperatures[myStack.top()]) {
                // if it is, need to find difference in days
                int prevIndex = myStack.top();
                myStack.pop();
                numDays[prevIndex] = i - prevIndex;
            }  
            // if stack is empty
            myStack.push(i);
        }
        return numDays;
    }
};
