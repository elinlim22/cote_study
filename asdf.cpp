#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int max_index = max_element(priorities.begin(), priorities.end()) - priorities.begin();

    vector<int>::iterator iter = priorities.begin() + max_index;
    for (; iter <= priorities.end(); answer++) {
        *iter = 0;
        max_index = max_element(iter, priorities.end()) - priorities.begin();
        iter = priorities.begin() + max_index;
    }
    iter = priorities.begin();
    if (*iter) {
        for (; iter <= priorities.end(); answer++) {
            *iter = 0;
            max_index = max_element(iter, priorities.end()) - priorities.begin();
            iter = priorities.begin() + max_index;
        }
    }

    return answer;
}
