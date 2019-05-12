//
// Created by zhangyingjie on 19-5-12.
//

#include <stdlib.h>
#include <string.h>
#include "priority_queue.h"

int init(priority_queue *queue, comparator comp, size_t size) {
    return 0;
}

int add(priority_queue *queue, void *element) {
    return 0;
}

void swap(priority_queue *queue, size_t i, size_t j) {
    void *temp = queue->data[i];
    queue->data[i] = queue->data[j];
    queue->data[j] = temp;
}
