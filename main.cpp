#include <iostream>
#include <unistd.h>
#include <vector>
#include <thread>


using namespace std;

void thread_func(const int i) {
    usleep(i * 1000);
    cout << "sorted place: " << i << endl;
}

int main() {
    vector<int> source_storage = {100, 36, 5, 222, 7, 17, 3};
    vector<thread> thread_pool;

    thread_pool.reserve(source_storage.size());
    for (const auto &item: source_storage) {
        thread_pool.emplace_back(thread_func, item);
    }

    for (auto &t: thread_pool) {
        t.join();
    }

    return EXIT_SUCCESS;
}
