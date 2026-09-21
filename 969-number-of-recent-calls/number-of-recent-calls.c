typedef struct {
      int *queue;
    int front;
    int rear;
    int size;
    int capacity;
} RecentCounter;


RecentCounter* recentCounterCreate() {
     RecentCounter* obj = (RecentCounter*)malloc(sizeof(RecentCounter));
    obj->capacity = 10000; // max 10^4 pings
    obj->queue = (int*)malloc(sizeof(int) * obj->capacity);
    obj->front = 0;
    obj->rear = 0;
    obj->size = 0;
    return obj;
    
}

int recentCounterPing(RecentCounter* obj, int t) {
     obj->queue[obj->rear++] = t;
    obj->size++;

    // Remove pings older than t - 3000
    while (obj->queue[obj->front] < t - 3000) {
        obj->front++;
        obj->size--;
    }

    return obj->size;
}

void recentCounterFree(RecentCounter* obj) {
     free(obj->queue);
    free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/