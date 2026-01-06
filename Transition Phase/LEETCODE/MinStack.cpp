#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    private:
    stack<pair<int, int>> st;
    public:
        MinStack() {}
        
        void push(int val) {
            if (st.empty()){
                st.push({val, val});
            }else{
                int curMin = min(val, st.top().second);
                st.push({val, curMin});
            }
        }
        
        void pop() {
            if (!st.empty()){
                st.pop();
            }
        }
        
        int top() {
            return st.top().first;
        }
        
        int getMin() {
            return st.top().second;
        }
};
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */

int main(){

    MinStack* stack = new MinStack();

    stack->push(10);
    stack->push(5);
    stack->push(7);

    cout << "Top : " << stack->top() << '\n';
    cout << "Min : " << stack->getMin() <<'\n';
    
    stack->pop();


}