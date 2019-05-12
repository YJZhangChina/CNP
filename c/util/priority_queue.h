//
// Created by zhangyingjie on 19-5-12.
//

#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <stdlib.h>

#define DEFAULT_SIZE 10

typedef int (*comparator)(void *o1, void *o2);

typedef struct priority_queue {
    void **data;
    size_t length;
    size_t size;
    comparator comp;
} priority_queue;

int init(priority_queue *queue, comparator comp, size_t size);

//int is_empty(priority_queue *queue);

//size_t size(priority_queue *queue);

//void *get_min(priority_queue *queue);

//int remove_min(priority_queue *queue);

int add(priority_queue *queue, void *element);

#endif //PRIORITY_QUEUE_H
