#include "PriorityQueue.h"

ArrayBasedQueue::ArrayBasedQueue(void){

}

ArrayBasedQueue::~ArrayBasedQueue(){

}

bool ArrayBasedQueue::insert(const int &val){
    m_vector.push_back(val);
    m_count++;
    return false;
}

bool ArrayBasedQueue::deQueue(){
    bool ans = false;
    m_count--;
    for (int i = 1 ; i <= m_vector.size() ; i++){
        m_vector[i] = m_vector[i + 1];
        ans = true;
    }
    return ans;
}

std::string ArrayBasedQueue::PrintPriorityQueue() const{

    return std::string();
}

bool ArrayBasedQueue::isEmpty() const{
    if (m_count == 0){
        return true;
    }
    return false;
}

HeapBasedQueue::HeapBasedQueue(void){

}

HeapBasedQueue::~HeapBasedQueue(){

}

bool HeapBasedQueue::insert(const int &val){

    return false;
}

bool HeapBasedQueue::deQueue(){

    return false;
}

std::string HeapBasedQueue::PrintPriorityQueue() const{

    return std::string();
}

bool HeapBasedQueue::isEmpty() const{

    return false;
}
