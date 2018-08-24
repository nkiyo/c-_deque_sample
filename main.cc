#include <stdio.h>
#include <deque>

using namespace std;

void print_deque(const deque<int>& q) {
    size_t len = q.size();
    printf("|");
//    for(int i = 0; i < len; i++) {
//        printf("%d|", q[i]);
//    }
    for(deque<int>::const_iterator it = q.begin(); it != q.end(); ++it) {
        printf("%d|", (*it));
    }
    printf("\n");
}

int main() {
    deque<int> q(5, 777);
    print_deque(q);

    q.push_back(999);
    print_deque(q);

    q.push_front(111);
    print_deque(q);

    printf("pop back %d\n", q.back());
    q.pop_back();
    print_deque(q);

    printf("pop front %d\n", q.front());
    q.pop_front();
    print_deque(q);
}

