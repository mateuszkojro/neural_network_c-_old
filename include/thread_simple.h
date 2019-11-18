#pragma once 

#include <thread>
#include <iostream>
#include <deque>

class thread_it{

public:
int thread_count;
std::deque<int> data;

    thread_it(int n_threads , std::deque<int> input,void *(func)())
        :thread_count(n_threads),data(input){

            std::deque<std::deque<int>>ready = split(data);

            std::deque<std::thread> threads;

            for (int i = 0 ; i < thread_count; ++i){

                //std::thread thr (func, ready[i]);
                std::thread thr(func);
                threads.push_back(thr);
                
            }

            for(int i =0 ; i < thread_count; ++i){
                threads[i].join();
            }



        }

private:

std::deque<std::deque<int>> split(std::deque<int>x){

    std::deque<std::deque<int>> result;
    
    for(int i = 0; i < thread_count;++i){
        std::deque<int> y;
        for(int j = 0; j < x.size() / thread_count;++j){

            y.push_back(x[(i * thread_count) + j]);

        }
        result.push_back(y);
    }

return result;
}
};