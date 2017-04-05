//用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int result = 0;
        if (stack2.size() > 0) {
            result = stack2.top();
            stack2.pop();
        } else {
            while (stack1.size() > 0) {
                int temp = stack1.top();
                stack1.pop();
                stack2.push(temp);
            }
            result = stack2.top();
            stack2.pop();
        }
        return result;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};