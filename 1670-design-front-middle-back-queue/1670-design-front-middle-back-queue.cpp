class FrontMiddleBackQueue {
public:
    deque<int>dq;
    FrontMiddleBackQueue() {}
    void pushFront(int val) {
        dq.push_front(val);
    }
    void pushMiddle(int val) {
        dq.insert(begin(dq) + dq.size()/2, val);
    }
    void pushBack(int val) {
        dq.push_back(val);
    }
    int popFront() {
        if(dq.empty()) return -1;
        int front = dq.front();
        dq.pop_front();
        return front;
    }
    int popMiddle() {
        if(dq.empty()) return -1;
        int m = dq.size() % 2 ? dq.size() / 2 : (dq.size() / 2) - 1;
        int res = dq[m];
        dq.erase(begin(dq) + m);
        return res;
    }
    int popBack() {
        if(dq.empty()) return -1;
        int back = dq.back();
        dq.pop_back();
        return back;
    }
};