#include <deque>

class RecentCounter {
private:
    std::deque<int> deque;

public:
    RecentCounter() {}

    int ping(int t) {
        
        while (!deque.empty() && deque.front() < t - 3000) {
            deque.pop_front();
        }

        deque.push_back(t);
        return deque.size();
    }
};
