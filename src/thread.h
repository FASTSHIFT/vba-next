#ifndef __THREAD_H__
#define __THREAD_H__

#define THREAD_PRIORITY_HIGH 	1
#define THREAD_PRIORITY_NORMAL 	2
#define THREAD_PRIORITY_LOW 	3

#ifdef THREADED_RENDERER
typedef void(*threadfunc_t)(void*);
typedef struct waithandle_impl waithandle_t;

int thread_id();
void thread_run(threadfunc_t func, void* p, int priority);
void thread_sleep(int ms);

waithandle_t* waithandle_create();
void waithandle_release(waithandle_t* wh);
void waithandle_lock(waithandle_t* wh);
void waithandle_unlock(waithandle_t* wh);

#endif

#endif

