#pragma once
#include <string>
#include <vector>


class PriorityQueue{
public:
    virtual bool insert(const int& val) = 0;
    virtual bool deQueue() = 0;
    virtual std::string PrintPriorityQueue() const = 0;
    virtual bool isEmpty() const = 0;

private:

};

class ArrayBasedQueue : PriorityQueue{
public:
    ArrayBasedQueue(void);
    virtual ~ArrayBasedQueue();
    bool insert(const int& val) override;
    bool deQueue() override;
    std::string PrintPriorityQueue() const override;
    bool isEmpty() const override;

private:
    std::vector<int> m_vector;
    int m_count;

};

class HeapBasedQueue : PriorityQueue{
public:
    HeapBasedQueue(void);
    virtual ~HeapBasedQueue();
    bool insert(const int& val) override;
    bool deQueue() override;
    std::string PrintPriorityQueue() const override;
    bool isEmpty() const override;

private:
    std::vector<int> m_heap;
    int m_count;

};
