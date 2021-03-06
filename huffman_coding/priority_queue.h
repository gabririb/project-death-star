/*
 * priority_queue.h
 *  Created on: May 30, 2015
 */

#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

/**
 * Struct of a node containing a value, a priority and 3 pointers:
 * #next points to the next node on the priority queue
 * #left points to left child node
 * #right points to right child node
 */
typedef struct node Node;

/**
 * Struct of a queue containing a pointer that points to the
 * very first node of the priority queue
 */
typedef struct queue Queue;

/**
 * Allocates queue, sets its property @first as NULL and
 * returns a pointer to the newly allocated Queue.
 */
Queue* createQueue();

/**
 * Check if the queue is empty
 * returns true of false.
 */
int isEmpty(Queue* queue);

/**
 * Takes an already allocated Node and equeues it according to its
 * priority in ASCENDING order.
 */
Queue* insertNodeOnQueue(Queue* priorityQueue, Node* newNode);

/**
 * Allocates node and sets its priority and value.
 * Also sets its left and right pointers to NULL;
 */
Node* createQueueNode(char item, int priority);

/**
 * Allocates node and sets its pointers(left & right), priority and value,
 * then inserts the new node in the queue according to its priority in ASCENDING order.
 */
Queue* enqueue(Queue* priorityQueue, char item, int priority);

/**
 * Returns first element of the queue (with the lowest priority) then
 * removes it by setting its #nextNode attribute to NULL and moving the queue's HEAD forward,
 * If the queue is empty, returns NULL.
 */
Node* dequeue(Queue* queue);

/**
 * Prints every element of the queue in order.
 */
void printPriorityQueue(Queue* queue);

/**
 * Prints the elements of a tree in Pre-order
 */
void printQueueTreePreOrder(Node* node);

/**
 * Free every element of the queue.
 */
void freePriorityQueue(Queue* queue);

/**
 * Returns the number of elements on given queue.
 */
int getQueueLength(Queue* queue);

/**
 * Takes the first 2 nodes of given queue, remove them and set both as left and right childs of a new allocated node
 * which value is set to '*' and priority set to the sum of its children, then enqueues this new node into the priority queue.
 * Repeats those steps until theres only one element on queue, generating a tree. Later returns this new tree.
 */
Node* mergeQueueIntoHuffmanTree(Queue* queue);

#endif /* PRIORITY_QUEUE_H_ */
